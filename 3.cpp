class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
            return 0;
        unordered_set<char> st;
        int j = 0, maxLen = 1;
        for(int i = 0; i < s.size(); i++) {
            while(st.find(s[i]) != st.end()) {
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            maxLen = max(maxLen, i - j + 1);
        }
        return maxLen;
    }
};
