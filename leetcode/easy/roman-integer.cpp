class Solution {
public:
    int check(char c){
        switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(i < s.size() - 1){
                if(((s[i+1] == 'V' || s[i+1] == 'X') && s[i] == 'I') || ((s[i+1] == 'C' || s[i+1] == 'L') && s[i] == 'X') || ((s[i+1] == 'D' || s[i+1] == 'M') && s[i] == 'C')){
                    sum += (check(s[i+1]) - check(s[i]));
                    i++;
                    continue;
                }
            }
            sum += check(s[i]);
          }
        return sum;
    }
};