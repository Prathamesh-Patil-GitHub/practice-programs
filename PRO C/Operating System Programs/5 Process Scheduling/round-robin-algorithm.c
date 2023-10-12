/// Author : Prathamesh Patil
/// Round Robin Scheduling Algorithm

#include<stdio.h>
#include<stdlib.h>

// Process Structure
typedef struct proc{
    int pid, bt, at, tt, wt;
}proc;

// p for processes, copy to copy all the processes for further use after calculations on bt
// n for no. of processes, q will work as a queue for round robing algorithm
proc *p;
proc *copy;
int n;
proc **q;
int front=-1, rear=-1;  // Used in queue
int time;   // Given time quantum

int isEmpty(){  // Tells if Queue is empty or not
    return front == -1;
}

void push(proc* newProc){ // Pushes an element to the back of the queue
    if(front == -1){
        front = rear = 0;
        q[rear] = newProc;
    }
    else{
        rear++;
        q[rear] = newProc;
    }
}

proc* pop(){        // Pops an element from the front of the queue
    if(front == -1){
        return NULL;
    }

    proc* res = q[front];
    if(front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }
    return res;
}

void printProcesses(){  // Prints all the processes with their complete information
    printf("\nID\tBT\tAT\tTT\tWT\n");
    for(int i=0; i<n; i++){
        printf("%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].bt, p[i].at, p[i].tt, p[i].wt);
    }
    printf("\n\n");
}

void sort(){    // Used to sort the processes based on their at
    int i, j;
    proc temp;
    for(i=1; i<n; i++){
        for(j=0; j<n-i; j++){
            if(p[j].at > p[j+1].at){
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

void calculate(){   // Used to calculate the TT and WT
    int ind=1, curr=0, i;
    push(&p[0]);    // Pushing the first process
    while(!isEmpty()){  // Do the operations until Queue is not empty
        proc *temp = pop();
        if(temp->bt <= time){   // If the process's remaining bt is less than or equal to time quantum
            temp->tt = curr + temp->bt;
            temp->bt = 0;
        }
        else{           // If the process remaining bt is greater than time quantum
            temp->tt = curr + time;
            temp->bt = temp->bt - time;
        }

        curr = temp->tt;    // Update the current time to current process's tt

        while(ind < n && p[ind].at <= temp->tt){    // Push all processes with at less than or equal to current process's tt
            push(&p[ind++]);
        }

        if(temp->bt !=0){   // If current process is not exhausted push it again
            push(temp);
        }
    }


    // Copying BT and Calculating TT and WT
    for(i=0; i<n; i++){
        p[i].bt = copy[i].bt;
        p[i].tt = p[i].tt - p[i].at;
        p[i].wt = p[i].tt - p[i].bt;
     }
}

void main(){
    int i, avgWT, avgTT;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    if(n < 1) return;

    printf("Enter the time quantum: ");
    scanf("%d", &time);

    p = (proc*)malloc(sizeof(proc)*n);
    copy = (proc*)malloc(sizeof(proc)*n);
    q = (proc**)malloc(sizeof(proc)*n*10);

    for(i=0; i<n; i++){     // Taking all process data
        printf("Enter the process %d id, bt and at: ", i+1);
        scanf("%d %d %d", &p[i].pid, &p[i].bt, &p[i].at);
    }

    printProcesses();   // Printing once before sorting and calculations

    sort(); // Sorting all the processes

    for(i=0; i<n; i++){ // Copying every process before doing calculations
        copy[i] = p[i];
    }

    calculate();

    printProcesses();   // Printing after sorting and calculations

    // Calculating average
    avgWT = avgTT = 0;
    for(i=0; i<n; i++){
        avgTT += p[i].tt;
        avgWT += p[i].wt;
    }

    printf("Final Calculations: ");     // Printing final results
    printf("\nAverage TT: %f", avgTT/(float)n);
    printf("\nAverage WT: %f", avgWT/(float)n);
}
