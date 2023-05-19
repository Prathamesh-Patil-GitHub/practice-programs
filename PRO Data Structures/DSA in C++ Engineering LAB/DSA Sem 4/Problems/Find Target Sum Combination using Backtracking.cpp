// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void findCombination(vector<vector<int>> &ans, vector<int> &ds, int i, int n, int sum, int target, vector<int> &arr){
    if(i == n){
        if(target == sum){
            ans.push_back(ds);
        }
        return;
    }
    if(sum > target) return;
    
    // Taking into answer
    ds.push_back(arr[i]);
    findCombination(ans, ds, i+1, n, sum+arr[i], target, arr);
    
    // Not taking into ans
    ds.pop_back();
    findCombination(ans, ds, i+1, n, sum, target, arr);
    
}

int main() {
    // Write C++ code here
    vector<int> arr = {200, 100, 50, 30, 20, 10, 5, 6, 4};
    int n = arr.size();
    vector<vector<int>> ans;
    vector<int> ds;
    int target = 320;
    
    findCombination(ans, ds, 0,  n, 0, target, arr);
    
    for(vector<int> temp: ans){
        cout<<"\nSolution: "<<endl;
        for(int num: temp){
            cout<<num<<" ";
        }
    }
    
    return 0;
}
