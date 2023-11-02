// Author : Prathamesh Patil

#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>
#include <stdint.h>
#include <unistd.h>

#define R 5
#define W 5

int read_count=0, write_count=0;
pthread_mutex_t x;
sem_t w_sem;
int s = 5;


void *reader(void *a);
void *writer(void *a);

void main(){
	int i, op;
	pthread_t read_thread[R], write_thread[W];
	sem_init(&w_sem, 0, 1);
	for(i=0; i<R; i++){
		pthread_create(&read_thread[i], NULL, *reader, (void*)(intptr_t) i);
	}
	for(i=0; i<W; i++){
		pthread_create(&write_thread[i], NULL, *writer, (void*)(intptr_t) i);
	}
	
	for(i=0; i<R; i++){
		pthread_join(read_thread[i], NULL);
	}
	for(i=0; i<W; i++){
		pthread_join(write_thread[i], NULL);
	}
}

void* reader(void *a){
	int i=0, id = (intptr_t) a;
	while(i<5){
		pthread_mutex_lock(&x);
		read_count++;
		if(read_count == 1)
			sem_wait(&w_sem);
		pthread_mutex_unlock(&x);
		
		printf("\nReader %d is reading: %d", id, s);
		
		pthread_mutex_lock(&x);
		read_count--;
		if(read_count == 0)
			sem_post(&w_sem);
		pthread_mutex_unlock(&x);
		
		sleep(rand() % 5);

		i++;
	}	
}


void* writer(void *a){
	int i=0, id = (intptr_t) a;
	while(i<2){
		sem_wait(&w_sem);
		s += 5;
		printf("\nWriter %d is writing: %d", id, s);
		sem_post(&w_sem);
		sleep(rand() % 5);
		i++;

	}

}


