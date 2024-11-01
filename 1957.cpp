class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int i = 0;
        ans.push_back(s[0]);
        for(i = 1; i < s.length(); i++) {
            if(s[i] == s[i-1]) {
                while(s[i] == s[i-1])
                    i++;
                i--;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};
