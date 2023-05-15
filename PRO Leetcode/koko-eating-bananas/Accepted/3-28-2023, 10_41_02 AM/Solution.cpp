// https://leetcode.com/problems/koko-eating-bananas



class Solution {
public:
    bool check(int speed,vector<int>&piles,int h)
    {
        long long countHours=0;
        for(auto i:piles)
        {
            countHours+=(i+speed-1)/speed;//equivalent to ceil(i/speed)
        }
        if(countHours<=h)return true;
        else return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 1e9;

        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(mid, piles, h)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};