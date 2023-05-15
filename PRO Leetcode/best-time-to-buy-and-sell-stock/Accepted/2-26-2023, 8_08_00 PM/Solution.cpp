// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int profit = 0;
        for(int price:prices){
            minPrice = min(minPrice, price);
            profit = max(profit, price-minPrice);
        }
        return profit;
    }
};