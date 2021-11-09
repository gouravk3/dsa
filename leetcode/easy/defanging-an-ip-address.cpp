// https://leetcode.com/problems/defanging-an-ip-address/submissions/
class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(auto c : address){
            if(c == 46) res = res + "[.]";
            else res += c;
        }
        return res;
    }
};