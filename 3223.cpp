class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size(); i++) 
            mp[s[i]]++;
        int ans = 0;
        for (auto i : mp) {
            if(i.second > 2) {
                if(i.second & 1)
                    ans++;
                else
                    ans += 2;
            }
            else if (i.second == 2)
                ans += 2;
            else 
                ans++;
        }
        return ans;
    }
};
