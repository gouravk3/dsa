// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int a = target, res = 0;
        int n = letters.size();
        int low = 0, high = n - 1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(int(letters[mid]) <= a) low = mid + 1;
                
            if(int(letters[mid]) > a)
            {
                res = mid;
                high = mid - 1;
            }
        }
        return letters[res];
    }
};


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int a = target, res = 0;
        int n = letters.size();
        int low = 0, high = n - 1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            // if(int(letters[mid]) == a){
            //     low = mid + 1;
            // }
            if(int(letters[mid]) <= a) low = mid + 1;
                
            else if(int(letters[mid]) > a)
            {
                res = mid;
                high = mid - 1;
            }
        }
        return letters[res];
    }
};