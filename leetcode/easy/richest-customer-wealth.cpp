// https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int high = 0;
        for(int i = 0; i < accounts.size(); i++)
        {
            int count = 0;
            for(int j = 0; j < accounts[i].size() ;j++)
            {
                count += accounts[i][j];
            }
            high = max(high, count);
        }
        return high;
    }
};