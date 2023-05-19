/// Author: Prathamesh Patil

#include<iostream>
#include<stack>
#define N 7
using namespace std;

int graph[N][N];
int visited[N]{0};
stack<int> stk;

void dfs(int v){
    if(visited[v]==0){
        visited[v] = 1;
        cout<<v<<" ";
        stk.push(v);
    }
    for(int i=0;i<N;i++){
        if(graph[v][i]==1 && !visited[i]){
            dfs(i);
            break;
        }
    }
    
    if(!stk.empty()){
        int num = stk.top();
        stk.pop();
        dfs(num);
    }
}

int main(){
    int v;
    cout<<"Enter the matrix ("<<N<<"X"<<N<<"):"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>graph[i][j];
        }
    }
    cout<<"Enter the vertex to start from: ";
    cin>>v;
    cout<<"DFS of Graph: "<<endl;
    dfs(v);
    return 0;
}

// Test Case 1:
// Enter the matrix (7X7):
// 0 1 1 0 0 0 0  1 0 1 0 0 0 1  1 1 0 1 1 0 0  0 0 1 0 0 1 0  0 0 1 0 0 1 0  0 0 0 1 1 0 0  0 1 0 0 0 0 0
// Enter the vertex to start from: 2
// DFS of Graph: 
// 2 0 1 6 3 5 4 