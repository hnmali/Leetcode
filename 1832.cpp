class Solution {
public:
    bool checkIfPangram(string s) {
        if(s.size() < 26)
            return false;
        vector<bool> visit(26, false);
        for(int i = 0; i < s.size(); i++)
            visit[s[i]-'a'] = true;
        for(int i = 0; i < 26; i++)
            if(!visit[i])
                return false;
        return true;
    }
};
