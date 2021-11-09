// https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, m = INT_MIN;
        int neg = m;
        for(auto it : nums)
        {
            if(it > neg) neg = it;
            sum += it;
            if(sum < 0) sum = 0;
            if(sum > m) m = sum;
        }
        if(neg < 0) return neg;
        return m;
    }
};