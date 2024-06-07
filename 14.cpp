class Solution {
public:
    void update(string& str, int i) {
        while(i--)
            str.pop_back();
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            for (int j = 0; j < strs[i].length() && j < ans.length(); j++) {
                if (ans[j] != strs[i][j] and j == 0)
                    return "";
                if (ans[j] != strs[i][j]) 
                    update(ans,ans.length()-j);
                if (ans.length() == 0)
                    return "";
            }
            if (ans.length() > strs[i].length())
                update(ans, ans.length()-strs[i].length());
        }
        return ans;
    }
};
