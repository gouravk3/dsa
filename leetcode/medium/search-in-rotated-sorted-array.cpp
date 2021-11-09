// https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int min_index(vector<int>& arr)
    {
        int n = arr.size();
        int low = 0, high = n-1;
	    while(low <= high)
	    {
	        if(arr[low]<=arr[high]) return low;
            int mid = low + (high - low)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
	        
	        if(arr[mid] < arr[prev] && arr[mid] <= arr[next]) return mid;
	        
	        else if(arr[mid] >= arr[low])
	        {
	            low = mid + 1;
	        }
	        else if(arr[mid] <= arr[high])
	        {
	            high = mid - 1;
	        }
	    }
	    return 0;
    }
    int bs(vector<int>& arr, int low, int high, int target)
    {
        int n = arr.size();
	    while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] < target) low = mid + 1;
            else if(arr[mid] > target) high = mid - 1;         
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int index = min_index(nums);
        int n = nums.size();
        if(nums[n-1] >= target && nums[index] <= target) return bs(nums, index, n - 1, target);
        else return bs(nums, 0, index - 1, target);
        // int bs1 = bs(nums, 0, index - 1, target);
        // if(bs1 != -1)   return bs1;
        // else return bs(nums, index, n - 1, target);
    }
};




class Solution {
public:
    int min_index(vector<int>& arr, int n)
    {
        int low = 0, high = n-1;
	    while(low <= high)
	    {
	        if(arr[low]<=arr[high]) return low;
            int mid = low + (high - low)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
	        
	        if(arr[mid] < arr[prev] && arr[mid] <= arr[next]) return mid;
	        
	        else if(arr[mid] >= arr[low])
	        {
	            low = mid + 1;
	        }
	        else if(arr[mid] <= arr[high])
	        {
	            high = mid - 1;
	        }
	    }
	    return 0;
    }
    int bs(vector<int>& arr, int low, int high, int target)
    {
        int n = arr.size();
	    while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] < target) low = mid + 1;
            else if(arr[mid] > target) high = mid - 1;         
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int index = min_index(nums, n);
        int bs1 = bs(nums, 0, index - 1, target);
        if(bs1 != -1)   return bs1;
        else return bs(nums, index, n - 1, target);
    }
};