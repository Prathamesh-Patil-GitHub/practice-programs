// https://leetcode.com/problems/find-peak-element

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int low = 0, high = arr.size()-1, n = arr.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(mid == 0 && arr.size()>1){
                return arr[mid]>=arr[mid+1]?mid:mid+1;
            }
            if(mid == n-1){
                return arr[mid]>=arr[mid-1]?mid:mid-1;
            }
            if(arr[mid] >= arr[mid-1] && arr[mid]>=arr[mid+1]){
                return mid;
            }

            if(arr[mid-1] >= arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};