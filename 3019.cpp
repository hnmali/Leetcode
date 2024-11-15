class Solution {
public:
    int countKeyChanges(string s) {
        int cnt = 0;
        if(s[0] >= 'a' and s[0] <= 'z')
            s[0] = s[0] - 32;
        for(int i = 1; i < s.length(); i++) {
            if(s[i] >= 'a' and s[i] <= 'z')
                s[i] = s[i] - 32;
            if(s[i]!=s[i-1])
                cnt++;
        }
        return cnt;
    }
};
