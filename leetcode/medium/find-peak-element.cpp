// https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low <= high)
        {
            int mid  = low + (high - low)/2;
            if((nums[mid] > nums[mid + 1] && nums[mid - 1] < nums[mid]) || (mid == 0 && nums[mid] > nums[mid + 1]) || (mid == n - 1 && nums[mid - 1] < nums[mid]))
                return mid;
            
            else if(mid > 0 && nums[mid] > nums[])
        }
        
};