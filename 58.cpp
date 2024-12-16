class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length(), cnt = 0;
        for(int i = n-1; i >= 0; i--) {
            if(s[i] == ' ' and cnt != 0 )
                break;
            if(s[i] != ' ')
                cnt++;
        }
        return cnt;
    }
};
