// https://leetcode.com/problems/two-sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int size = nums.size();
        for(int i = 0; i < size - 1; i++)
        {
            for(int j = i+1; j < size; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
}; //Runtime 344,356ms

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> res;
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++)
        {
            if(map.find(target-nums[i]) != map.end())
            {
                res.push_back(i);
                res.push_back(map[target-nums[i]]);
                return res;
            }
            map[nums[i]] = i;
        }
        return res;
    }
}; //runtime 12ms
