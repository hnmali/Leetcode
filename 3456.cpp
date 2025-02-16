class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        for(int i = 0; i < s.size(); i++) {
            bool flag = false;
            for(int j = i+1; j < k+i; j++) {
                if(s[i] != s[j]) {
                    flag = true;
                    break;
                }
            }
            if(flag) continue;
            if(i > 0 && s[i-1] == s[i])
                continue;
            if(i < s.size()-1 && s[i+k-1] == s[i+k])
                continue;
            return true;
        }
        return false;
    }
};
