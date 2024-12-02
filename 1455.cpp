class Solution {
public:
    int isPrefixOfWord(string s, string target) {
        int cnt = 1;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                cnt++;
                continue;
            }
            if(s[i] == target[0] && (i==0 || s[i-1] == ' ')) {
                int temp = i, j;
                bool flag = true;
                i++;
                for( j = 1; j<target.length() && i<s.length(); j++,i++) {
                    if(target[j] != s[i]) {
                        flag = false;
                        break;
                    }
                }
                if(flag and j == target.length())
                    return cnt;
                i = temp;
            }
        }
        return -1;
    }
};
