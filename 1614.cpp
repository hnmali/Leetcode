class Solution {
public:
    int maxDepth(string s) {
        int maxm = 0, curr = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(')
                curr++;
            else if(s[i] == ')')
                curr--;
            maxm = max(curr, maxm);
        }
        return maxm;
    }
};
