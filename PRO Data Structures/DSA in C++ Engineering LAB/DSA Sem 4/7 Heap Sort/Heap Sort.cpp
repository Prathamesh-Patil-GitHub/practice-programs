// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void maxHeapify(vector<int> &arr, int n, int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int largest = i;
    if(l<n && arr[l] > arr[i]){
        largest = l;
    }
    
    if(r<n && arr[r] > arr[largest]){
        largest = r;
    }
    
    if(largest != i){
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(vector<int> &arr){
    int n = arr.size();
    for(int i=n/2-1;i>=0;i--){
        maxHeapify(arr, n, i);
    }
}

void heapSort(vector<int> &arr){
    int n = arr.size();
    buildMaxHeap(arr);
    
    for(int i=n-1;i>=0;i--){
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {4, 3, 2, 1, -2, 8};
    
    cout<<"Before Sorting: "<<endl;
    for(int num: arr){
        cout<<num<<" ";
    }
    
    heapSort(arr);
    
    cout<<"\nAfter sorting: "<<endl;
    for(int num: arr){
        cout<<num<<" ";
    }
    
    return 0;
}