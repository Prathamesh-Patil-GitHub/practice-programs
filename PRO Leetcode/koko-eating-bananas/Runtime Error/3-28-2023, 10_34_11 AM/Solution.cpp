// https://leetcode.com/problems/koko-eating-bananas



class Solution {
public:
    bool check(unsigned long long int m, vector<int> piles, unsigned long long int h){
        unsigned long long int count = 0;
        for(int pile:piles){
            count += ceil(float(pile)/m);
        }
        if(count<=h) return true;
        else return false;
    }

    unsigned long long int minEatingSpeed(vector<int>& piles, unsigned long long int h) {
        unsigned long long int low = floor(double(accumulate(piles.begin(), piles.end(), (long long int)0))/h);
        unsigned long long int high = *max_element(piles.begin(), piles.end());

        while(low<=high){
            unsigned long long int mid = low+(high-low)/2;
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