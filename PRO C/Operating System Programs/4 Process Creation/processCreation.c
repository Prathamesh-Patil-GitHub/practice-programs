#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
void asc(int*, int);
void desc(int*, int);
int main(){
	int *a,n,i;
	pid_t pid;
	printf("\nEnter the number of array elements: ");
	scanf("%d", &n);
	a = (int*)malloc(n*sizeof(int));
	printf("\nEnter the array elements:\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	pid = fork();
	
	if(pid < 0){
		printf("\n>>> Error occured while creating child process...");
		exit(-1);
	}
	else if(pid == 0){
		printf("\n>>> Child process id: %ld", (long)getpid());
	}
	else{
		printf("\n>>> Parent process id: %ld", (long)getpid());
	}
	
	switch(pid){
		case 0:
			printf("\nChild process executes...");
			asc(a, n);
			exit(0);
		default:
			wait(NULL);
			printf("\nParent process executes...");
			system("ps -elf");
			desc(a, n);
			printf("\n\n");
			exit(0);
	}
	return 0;
}

void asc(int *arr, int n){
	int i, j, temp;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\nAscending Sorted Elements in child process:\n");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void desc(int *arr, int n){
        int i, j, temp;
        for(i=1;i<n;i++){
                for(j=0;j<n-i;j++){
                        if(arr[j] < arr[j+1]){
                                temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }
	printf("\nDescending Sorted Elements in parent process:\n");
        for(i=0;i<n;i++){
                printf("%d ", arr[i]);
        }
	printf("\n");

}


