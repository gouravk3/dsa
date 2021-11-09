// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int high = 0;
        vector<bool> ret(candies.size());
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] > high) high = candies[i];
        }
        for(int i = 0; i < candies.size(); i++)
        {
            int count = candies[i] + extraCandies;
            if(count >= high)
            {
                ret[i] = true;
            }
            else
            {
                ret[i] = false;
            }
        }
        return ret;
    }
};