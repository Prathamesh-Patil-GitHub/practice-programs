#include<stdio.h>
#include<stdlib.h>

typedef struct proc{
	int pid, at, bt, tt, wt;
} proc;

void sort();
void calculation();
int n = 0;
proc* p;

void main(){
	int i;
	printf("Enter the number of processes: ");
	scanf("%d", &n);
	p = (proc*)malloc(sizeof(proc)*n);
	for(i=0; i<n; i++){
		printf("Enter the process no, process at, process bt for process no %d: ", i+1);
		scanf("%d %d %d", &p[i].pid, &p[i].at, &p[i].bt);
	}
	printf("\n\nProcesses are:\n");
	printf("PID\tAT\tBT \n");
	for(i=0; i<n; i++){
		printf("P%d\t%d\t%d \n", p[i].pid, p[i].at, p[i].bt);
	}

	sort();

	printf("\n\nProcesses after sorting are:\n");
        printf("PID\tAT\tBT \n");
        for(i=0; i<n; i++){
                printf("P%d\t%d\t%d \n", p[i].pid, p[i].at, p[i].bt);
        }


	calculation();

	printf("\n\n");
}

void sort(){
	int i, j;
	proc temp;
	for(i = 1; i<n; i++){
		for(j=0; j<n-i; j++){
			if(p[j].at > p[j+1].at){
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			} 
		}
	}

}

void calculation(){
	int i, avgWt=0, avgTt=0;
	p[0].tt = p[0].at + p[0].bt;
	for(i=1; i<n; i++){
		if(p[i-1].tt >= p[i].at){
			p[i].tt = p[i-1].tt + p[i].bt;
		}
		else{
			p[i].tt = p[i].at + p[i].bt;
		}
	}

	for(i=0; i<n; i++){
		p[i].tt = p[i].tt - p[i].at;
		p[i].wt = p[i].tt - p[i].bt;

		avgTt += p[i].tt;
		avgWt += p[i].wt;
	}

	printf("\n\nRESULT:");
	printf("\n\nPID\tAT\tBT\tTT\tWT\n");
	for(i=0; i<n; i++){
		printf("P%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].tt, p[i].wt);
	}

	printf("\nAverage Turn-around Time: %f", avgTt/(float)n);
	printf("\nAverage Waiting Time: %f", avgWt/(float)n);
}
