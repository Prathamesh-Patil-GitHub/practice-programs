// Find solution for sum from {200, 200, 100, 100 , 50, 50 , 20, 10, 5, 2} where target = 320 using greedy

#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> input = {200, 200, 100, 100 , 50, 50 , 20, 10, 5, 2};
    int sum = 0;
    vector<int> res;
    int target = 320;
    
    for(int num: input){
        if(sum + num > target) continue;
        
        sum += num;
        res.push_back(num);
        
        if(sum == target) break;
    }
    
    if(sum == target){
        cout<<"The solution is: "<< endl;
        for(int num: res){
            cout<<num<<" ";
        }
    }
    else{
        cout<<"No Solution Found !";
    }
    return 0;
}
