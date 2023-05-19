// Author: Prathamesh Patil
#include <iostream>
#include <stack>
#define n 6
using namespace std;

int visited[n]{0};

void DFS(int graph[n][n], int start){
    visited[start] = 1;
    for(int i=0;i<n;i++){
        if(graph[start][i] == 1 && !visited[i]){
            cout<<"The edge is: ["<<start<<", "<<i<<"]"<<endl;
            DFS(graph, i);
        }
    }
}

int main(){
    int v;
    int graph[n][n];
    cout<<"Enter the matrix ("<<n<<"X"<<n<<"):"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    cout<<"Enter the vertex to start from: ";
    cin>>v;
    cout<<"DFS of Graph: "<<endl;
    DFS(graph, v);
    return 0;
}
