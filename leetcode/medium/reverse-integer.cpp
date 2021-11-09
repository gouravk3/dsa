// https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while(x != 0 )
        {
            res = res*10 + x%10;
            x /= 10;
        }
        return (res > INT_MAX || res < INT_MIN)? 0 : res;
    }
};


class Solution {
public:
    int reverse(int x) {
        
        long long res = 0;
        long long a = x;
        if(a < 0) a = -1 * a;
        while(a != 0 )
        {
            res = res*10 + a%10;
            a = a/10;
        }
        if(res > 2147483647 || res < -2147483648)
        {
            res = 0;
            return res;
        }
        if(x < 0) res = -1 * res;
        return res;
    }
};