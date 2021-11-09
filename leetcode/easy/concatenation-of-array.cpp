// https://leetcode.com/problems/concatenation-of-array/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        for(int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[i];
            ans[i+nums.size()] = nums[i];
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        int j = 0;
        for(int i = 0; i < 2*nums.size(); i++)
        {
            if(i == nums.size()) j = 0;
            ans[i] = nums[j];
            j++;
        }
        return ans;
    }
};