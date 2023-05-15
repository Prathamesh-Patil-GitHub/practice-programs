// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low = 0, high = n-1, mid;
    while(low<=high){
        mid = (low+high)/2;
        if(nums[mid] == target){
            break;
        }
        else if(nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    
    int firstIndex = mid, lastIndex = mid;
    vector<int> res;
    if(low<=high){
        while(firstIndex>0 && nums[firstIndex-1] == target) firstIndex--;
        while(lastIndex<n-1 && nums[lastIndex+1] == target) lastIndex++; 
        res.push_back(firstIndex);
        res.push_back(lastIndex);
    }
    else{
        res.push_back(-1);
        res.push_back(-1);
    }

    return res;
    }
};