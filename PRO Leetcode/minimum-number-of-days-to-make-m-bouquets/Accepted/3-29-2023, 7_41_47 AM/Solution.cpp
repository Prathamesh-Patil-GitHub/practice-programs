// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets

class Solution {
public:

    bool check(int mid, vector<int> bloomDay, int m, int k){
        int countB = 0;
        int total = 0;
        for(int day: bloomDay){
            if(day<=mid){
                total++;
            }
            else{
                total = 0;
            }
            if(total==k){
                countB++;
                total = 0;
            }
            if(countB >= m){
                return true;
            }
        }

        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = 1;
        int high = 1e9;

        if(bloomDay.size() < ((long long int)m*(long long int)k)){
            return -1;
        }

        while(low<=high){
            int mid = low+(high-low)/2; //(low+high)/2
            if(check(mid, bloomDay, m, k)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};