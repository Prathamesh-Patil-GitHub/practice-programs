#include<iostream>
#define SIZE 5

using namespace std;

int main(){
    int graph[SIZE][SIZE],edges=0, minCost, row, col, totalCost = 0, start;
    int visited[SIZE] = {0};
    cout<<"Enter the cost graph ("<<SIZE<<"X"<<SIZE<<"): "<<endl;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cin>>graph[i][j];
            if(graph[i][j] == 0){
                graph[i][j]=999;
            }
        }
    }

    cout<<"Enter starting vertex: ";
    cin>>start;
    visited[start]=1;

    while(edges != SIZE-1){
        minCost = 999;
        for(int i=0;i<SIZE;i++){
            if(visited[i] == 1){
                for(int j=0;j<SIZE;j++){
                    if(graph[i][j] < minCost && visited[j]==0){
                        minCost = graph[i][j];
                        row = i;
                        col = j;
                    }
                }
            }
        }
        visited[col] = 1;
        totalCost += minCost;
        cout<<"\nSelected edge: ("<<row<<" ,"<<col<<")"<<" with cost ="<<minCost<<endl;
        edges++;
    }
    cout<<"\nTOTAL MST COST using PRIMS ALGORITHM = "<<totalCost<<endl;

    return 0;
}
