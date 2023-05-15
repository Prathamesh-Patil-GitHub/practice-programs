// https://leetcode.com/problems/koko-eating-bananas



class Solution {
public:
    bool check(int m, vector<int> piles, int h){
        int count = 0;
        for(int pile:piles){
            count += ceil(float(pile)/m);
        }
        if(count<=h) return true;
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