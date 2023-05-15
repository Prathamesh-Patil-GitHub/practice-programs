// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days

class Solution {
public:

    bool check(int mid, vector<int> weights, int days){
        int countOfDays = 0;
        int total = 0;
        for(int weight :weights){
            total += weight;
            if(total > mid){
                countOfDays++;
                total = weight;
            }
        }
        countOfDays++;
        return countOfDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low =  *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(mid, weights, days)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};