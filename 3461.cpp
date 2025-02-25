class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() > 2) {
            for(int i = 0; i < s.size()-1; i++) {
                int temp = s[i]+s[i+1]-'0'-'0';
                temp %= 10;
                s[i] = temp + '0';
            }
            s.pop_back();
        }
        return s[0] == s[1];
    }
};
