class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low>=high) return;
        int partIndex = partition(arr, low, high);
        quickSort(arr, low, partIndex-1);
        quickSort(arr, partIndex+1, high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int i=low;
        int j=high;
        int pivot = low;
        while(i<j){
            while(arr[i] <= arr[pivot] && i<high) i++;
            while(arr[j] > arr[pivot] && j>low) j--;
            if(i<j) swap(arr[i], arr[j]);
        }
        swap(arr[pivot], arr[j]);
        return j;
    }
};
