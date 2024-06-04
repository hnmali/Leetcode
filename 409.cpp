class Solution {
public:
    int longestPalindrome(string s) {
        if (s.length() == 1)
            return 1;
        int ans = 0;
        vector<int> small(26), capital(26);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                small[s[i]-'a']++;
            else
                capital[s[i]-'A']++;
        }
        for (int i = 0; i < 26; i++) {
            if (capital[i] && capital[i]%2 == 0)
                ans += capital[i];
            else if (capital[i] && capital[i]%2 != 0)
                ans += capital[i]-1;
            if (small[i] && small[i]%2 == 0)
                ans += small[i];
            else if (small[i] && small[i]%2 != 0)
                ans += small[i]-1;
        }
        if (s.length() > ans)
            return ans + 1;
        return ans;
    }
};
