class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int lastI = -1;
        for (int i = 0; i < s.length(); i++) {
            if ((i == s.length() - 1) || s[i] == ' ') {
                int revI = (i == s.length() - 1) ? i : i - 1;
                for (; revI > lastI; revI--) 
                    ans += s[revI];
                if (i != s.length() - 1) 
                    ans += ' ';
                lastI = i;
            }
        }
        return ans;
    }
};
