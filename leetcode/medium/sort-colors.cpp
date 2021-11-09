// https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Used counting sort
        int ones = 0, twos = 0, zeros = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0) zeros++;
            if(nums[i] == 1) ones++;
            if(nums[i] == 2) twos++;
        }
        int i = 0;
        while(zeros > 0){
            zeros--;
            nums[i] = 0;
            i++;
        }
        while(ones > 0){
            ones--;
            nums[i] = 1;
            i++;
        }
        while(twos > 0){
            twos--;
            nums[i] = 2;
            i++;
        }
    }
};