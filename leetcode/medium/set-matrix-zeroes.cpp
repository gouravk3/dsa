// https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool col = true;
        int rows = matrix.size(), cols = matrix[0].size();
        for(int i = 0; i < rows; i++)
        {
            if(matrix[i][0] == 0) col = false;
            for(int j = 1; j < cols; j++)
            {
                if(matrix[i][j] == 0) matrix[i][0] = matrix[0][j] = 0;
            }
        }
        for(int i = rows-1; i >= 0; i--)
        {
            for(int j = cols-1; j >= 1; j--)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
            if(col == false) matrix[i][0] = 0;
        }
    }
};

//  1  2  3  4
//  5  0  7  8
//  0 10 11 12
// 13 14 15  0

// 0  0  3  0
// 0  0  7  8
// 0 10 11 12
// 0 14 15  0
