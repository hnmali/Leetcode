class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cntS(26), cntT(26);
        for(int i = 0; i < s.size(); i++)
            cntS[s[i]-'a']++;
        for(int i = 0; i < t.size(); i++)
            cntT[t[i]-'a']++;
        for(int i = 0; i < 26; i++)
            if(cntS[i] != cntT[i])
                return false;
        return true;
    }
};
