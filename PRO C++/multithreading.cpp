#include<iostream>
#include<thread>
#include<vector>
#include<mutex>
#include<chrono>
using namespace std;

mutex mtx;

void print_nums(int start=0, int end=9){
    mtx.lock();
    for(int i=start;i<=end;i++){
        cout<<i<<" ";
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
    cout<<endl;
    mtx.unlock();
}

int main(){
    vector<thread> vec;
    for(int i=1;i<=3;i++){
        vec.push_back(thread(print_nums, 0, i*5));
    }
    for(auto& it: vec){
        it.join();
    }
    return 0;
}
