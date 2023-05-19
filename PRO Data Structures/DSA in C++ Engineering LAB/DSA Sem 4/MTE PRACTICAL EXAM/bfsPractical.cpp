/// Author: Prathamesh Patil

#include<iostream>
#include<queue>
#define n 6
using namespace std;

int graph[n][n];
int visited[n]{0};

void bfs(int start){

	queue<int> q;
	q.push(start);
	visited[start] = 1;
	
	while(!q.empty()){
		int num = q.front();
		q.pop();
		cout<<num<<" ";
		for(int i=0;i<n;i++){
			if(graph[num][i] == 1 && !visited[i]){
				q.push(i);
				visited[i] = 1;			
			}
		}
	}
}

int main(){
	int start;
	cout<<"Enter the graph of 6X6: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>graph[i][j];		
		}
	}

	cout<<"Enter the starting vertex: ";
	cin>>start;

	bfs(start);
	
	return 0;
}
