class Solution {
public:
    vector<string> partitionString(string s) {
        unordered_set<string> st;
        vector<string> ans;
        string curr = "";
        for(int i = 0; i < s.size(); i++) {
            curr += s[i];
            if(st.find(curr) == st.end()) {
                ans.push_back(curr);
                st.insert(curr);
                curr = "";
            }
        }
        return ans;
    }
};
