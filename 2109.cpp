class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int j = 0;
        if(spaces[0] == 0) {
            j++;
            ans.push_back(' ');
        }
        for(int i = 0; i < s.length(); i++) {
            ans.push_back(s[i]);
            if(j < spaces.size() && i+1 == spaces[j]) {
                ans.push_back(' ');
                j++;
            }
        }
        return ans;
    }
};
