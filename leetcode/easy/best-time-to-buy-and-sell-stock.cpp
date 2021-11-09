// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Keeping track of min
        int profit = 0, min = INT_MAX;
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < min) min = prices[i];
            if(prices[i] - min > profit) profit =  prices[i] - min;
        }
        return profit;
    }
};