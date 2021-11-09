// https://leetcode.com/problems/running-sum-of-1d-array/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
       for (int i = 1; i < nums.size(); ++i) 
       {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res(nums.size());
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            count += nums[i];
            res[i] = count;
        }
        return res;
    }
};