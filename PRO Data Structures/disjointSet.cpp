// Author: Prathamesh Patil

#include<iostream>
#include<vector>
using namespace std;
class DisjointSet{
    vector<int> parent;
    vector<int> rank;
    vector<int> size;
public:
    DisjointSet(int s){
        rank.resize(s+1, 0);
        size.resize(s+1, 1);
        parent.resize(s+1);
        for(int i=0;i<=s;i++){
            parent[i] = i;
        }
    }
    int findUParent(int u){
        if(parent[u] == u){
            return u;
        }
        return parent[u] = findUParent(parent[u]);
    }

    void unionByRank(int u, int v){
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] > rank[ulp_v]){
            parent[ulp_v] = ulp_u;
        }
        else if(rank[ulp_v] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else{
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }

    void unionBySize(int u, int v){
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);
        if(size[ulp_u] > size[ulp_v]){
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
        else{
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
    }

    bool isConnected(int u, int v){
        return findUParent(u) == findUParent(v);
    }
};

int main(){
    DisjointSet st(6);

    /// Use any of the unionByRank and unionBySize function but make sure to use only
    /// one with one object. Don't use them in combination, it would not work properly.

    cout<<"Is 1-2 connected initially: "<<(st.isConnected(1, 2)?"Yes":"No")<<endl;
    cout<<"Is 1-3 connected initially: "<<(st.isConnected(1, 3)?"Yes":"No")<<endl;
    st.unionBySize(1, 2);
    st.unionBySize(3, 4);
    st.unionBySize(5, 6);
    cout<<"Is 1-2 connected now: "<<(st.isConnected(1, 2)?"Yes":"No")<<endl;
    cout<<"Is 3-4 connected now: "<<(st.isConnected(3, 4)?"Yes":"No")<<endl;
    cout<<"Is 4-5 connected now: "<<(st.isConnected(4, 5)?"Yes":"No")<<endl;
    st.unionBySize(4, 5);
    cout<<"Is 4-5 connected now: "<<(st.isConnected(4, 5)?"Yes":"No")<<endl;
    st.unionBySize(2, 6);
    cout<<"Is 1-3 connected now: "<<(st.isConnected(1, 3)?"Yes":"No")<<endl;

    /**
    Final Created Graph:
            1----2
                  \
                   \
                    \
                     \
                      \
        3---4-----5----6
    */
}

