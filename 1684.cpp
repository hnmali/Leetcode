class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> allow(26,1);
        int ans = 0;
        for (int i = 0; i < allowed.length(); i++)
            allow[allowed[i]-'a'] = false;
        for (int i = 0; i < words.size(); i++) {
            bool flag = true;
            for (int j = 0; j < words[i].length(); j++) {
                char ch = words[i][j];
                if(allow[ch-'a'])
                    flag = false;
            }
            if(flag)
                ans++;
        }
        return ans;
    }
};
