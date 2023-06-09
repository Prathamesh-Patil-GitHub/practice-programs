/// Author : Prathamesh Patil
/// Problem: Apply Bellman - Ford algorithm to find the shortest path from the starting vertex to all other vertices
/// Note: The graph may include negative weights over the edges
#include <iostream>
#include <vector>
#define N 6
#define INF 1000000009
using namespace std;

void relax(int index, vector<vector<int>> &graph, vector<int> &distance){
    for(int i=0;i<N;i++){
        if(graph[index][i] != INF && distance[i] > distance[index] + graph[index][i]){
            distance[i] = distance[index] + graph[index][i];
        }
    }
}

int main() {
    vector<vector<int>> graph =  {
        {INF, 6, 4, 5, INF, INF},
        {INF, INF, INF, INF, -1, INF},
        {INF, -2, INF, INF, 3, INF},
        {INF, INF, -2, INF, INF, -1},
        {INF, INF, INF, INF, INF, 3},
        {INF, INF, INF, INF, INF, INF}
    };
    vector<int> distance(N, INF);
    distance[0] = 0;

    cout<<"\n'          - BELLMAN FORD ALGORITHM -        '\n\n";

    cout<<"Before applying algorithm distance vector is: "<<endl;
    for(int num: distance){
        if(num == INF)
            cout<<"INF ";
        else
            cout<<num<<" ";
    }

    for(int i=0;i<N-1;i++){
        relax(i, graph, distance);
    }

    cout<<"\n\nAfter applying algorithm once distance vector is: "<<endl;
    for(int num: distance){
        if(num == INF)
            cout<<"INF ";
        else
            cout<<num<<" ";
    }
    vector<int> temp {distance};

    for(int i=0;i<N-1;i++){
        relax(i, graph, distance);
    }

    cout<<"\n\nAfter applying algorithm twice distance vector is: "<<endl;
    for(int num: distance){
        if(num == INF)
            cout<<"INF ";
        else
            cout<<num<<" ";
    }

    // Checking for negative cycle
    bool isPresent = false;
    for(int i=0; i<N; i++){
        if(distance[i] != temp[i]){
            cout<<"\n\nNegative Cycle Exists !"<<endl;
            isPresent = true;
            break;
        }
    }
    if(!isPresent){
        cout<<"\n\nNegative Cycle Doesn't Exists !"<<endl;
    }
    return 0;
}


/* TEST CASE 0:

N = 6
vector<vector<int>> graph =  {
        {INF, 6, 4, 5, INF, INF},
        {INF, INF, INF, INF, -1, INF},
        {INF, -2, INF, INF, 3, INF},
        {INF, INF, -2, INF, INF, -1},
        {INF, INF, INF, INF, INF, 3},
        {INF, INF, INF, INF, INF, INF}
    };

OUTPUT:

'          - BELLMAN FORD ALGORITHM -        '

Before applying algorithm distance vector is:
0 INF INF INF INF INF

After applying algorithm once distance vector is:
0 2 3 5 5 4

After applying algorithm twice distance vector is:
0 1 3 5 1 4

Negative Cycle Exists !

*/
/* TEST CASE 1:

N = 5
 vector<vector<int>> graph =  {
        {INF, 4, 5, INF, INF},
        {INF, INF, INF, 5, -3},
        {INF, -2, INF, -2, -3},
        {INF, INF, -2, INF, INF},
        {INF, INF, INF, 6, INF},
    };

OUTPUT:

'          - BELLMAN FORD ALGORITHM -        '

Before applying algorithm distance vector is:
0 INF INF INF INF

After applying algorithm once distance vector is:
0 3 1 3 1

After applying algorithm twice distance vector is:
0 -1 -3 -1 -2

Negative Cycle Exists !

*/
