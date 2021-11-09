// https://leetcode.com/problems/pascals-triangle-ii/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector<int> res(n+1);
        for(int i = 0; i <= n; i++)
        {
            long long int x = 1;
            if(i == 0 || i == n) res[i] = 1;
            else{
                for(int j = 0; j < i; j++)
                {
                    x *= (n - j);
                    x /= (j + 1);
                }
                res[i] = x;
            }
        }
        return res;
    }
};