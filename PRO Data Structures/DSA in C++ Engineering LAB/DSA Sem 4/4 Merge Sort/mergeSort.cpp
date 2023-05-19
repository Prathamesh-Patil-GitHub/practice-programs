/// Author: Prathamesh Patil

#include <iostream>
using namespace std;
void merge(int arr[], int beg, int mid, int end){
    int i = beg;
    int j = mid+1;
    int temp[end-beg+1];
    int k = 0;
    while(i<=mid && j<=end){
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while(i<=mid) 
        temp[k++] = arr[i++];
    
    while(j<=end)
        temp[k++] = arr[j++];
    
    for(k=0;k<end-beg+1;k++)
        arr[beg+k] = temp[k];
        
    return;
}


void mergeSort(int arr[], int beg, int end){
    if(beg<end){
        int mid = beg+(end-beg)/2;
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}


int main() {
    int arr[10] = {3, 5, 32, 29, 10, 43, -10, 33, 2, -4};
    int n = 10;
    cout<<"Before sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    mergeSort(arr, 0, 9);
    
    cout<<"After sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
}
