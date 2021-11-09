// https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> res;
        int i = 0;
        while(i < n)
        {
            res.push_back(nums[i]);
            res.push_back(nums[n+i]);
            i++;
        }
        return res;
    }
};


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> res(2*n);
        int p1 = 0, p2 = n, i = 0;
        while(i < 2*n)
        {
            res[i++] = nums[p1++];
            res[i++] = nums[p2++];      
        }
        return res;
    }
};