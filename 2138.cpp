class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string tmp = "";
        for(int i = 0; i < s.size(); i++) {
            if(tmp.size() == k) {
                ans.push_back(tmp); 
                tmp = "";
            }
            tmp += s[i];                
        }
        while(tmp.size() != k)
            tmp += fill;
        ans.push_back(tmp);
        return ans;
    }
};
