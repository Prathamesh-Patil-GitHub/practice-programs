#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>

#define FIFO_NAME1 "comm_pipe1"
#define FIFO_NAME2 "comm_pipe2"

int main(){
	
	char s[300], send[300];
	int num, fd1, fd2, wrdCount=1, i;
	mknod(FIFO_NAME1, S_IFIFO | 0666, 0);
	mknod(FIFO_NAME2, S_IFIFO | 0666, 0);
	printf("Waiting for producer\n");

	fd1 = open(FIFO_NAME1, O_RDONLY);
	fd2 = open(FIFO_NAME2, O_WRONLY);

	if((num = read(fd1, s, 300)) == -1 ){
		printf("Error occured while reading...\n");
	}
	else{
		s[num] = '\0';
		printf("Read string: %s \n", s);
		for(i=0; i<strlen(s); i++){
			if(s[i] == ' '){
				wrdCount++;
			}
		}
		
		sprintf(send, "Word count = %d", wrdCount);

		num = write(fd2, send, strlen(send));

		if(num == -1){
			printf("Error occured while writing...\n");
		}
		else{
			printf("Consumer: Wrote %d bytes\n", num); 
		}
	}
	
	close(fd1);
	close(fd2);
	
	return 0;
}










