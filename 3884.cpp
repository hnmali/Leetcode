class Solution {
public:
    int firstMatchingIndex(string s) {
        int i = 0, j = s.size()-1;
        while(i < j && s[i] != s[j]) {
            i++;
            j--;
        }
        return (s[i] == s[j])?i:-1;
    }
};
