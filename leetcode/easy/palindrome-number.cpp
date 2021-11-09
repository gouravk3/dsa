// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(long x) {
        if(x < 0) return false;
        long a = x;
        long res = 0;
        while(x != 0)
        {
            res = res*10 + x%10;
            x /= 10;
        }
        return(res != a || res > INT_MAX)? false : true;
    }
};