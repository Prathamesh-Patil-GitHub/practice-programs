/// Author: Prathamesh Patil

#include<iostream>
#include<queue>
#define N 6
using namespace std;

int visited[N]{0};
queue<int> q;
int graph[N][N];


void bfs(int v){
    visited[v] = 1;
    cout<<v<<" ";
    for(int i=0;i<N;i++){
        if(graph[v][i] == 1 && !visited[i]){
            q.push(i);
            visited[i]=1;
        }
    }
    if(!q.empty()){
        int num = q.front();
        q.pop();
        bfs(num);
    } 
}

int main(){
    int v;

    cout<<"Enter the graph in matrix of ["<<N<<"X"<<N<<"]: "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>graph[i][j];
        }
    }

    cout<<"Enter the starting point: ";
    cin>>v;

    cout<<"The traversal order is: "<<endl;
    bfs(v);

    return 0;
}
