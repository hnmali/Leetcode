class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char, int> mp;
        string ans = "";
        for(int i = 0; i < s.size(); i++)
            mp[s[i]]++;
        for(int i = 1; i < s.size(); i++) {
            if(s[i] == s[i-1]) continue;
            if(mp[s[i]] == (s[i]-'0'))
                if(mp[s[i-1]] == (s[i-1] - '0')) {
                    ans = s[i-1];
                    ans += s[i];
                    return ans;
                }
        }
        return ans;
    }
};
