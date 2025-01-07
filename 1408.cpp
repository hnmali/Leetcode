class Solution {
public:
    bool isSubstring(string a, string b) {
        for(int i = 0; i < b.length(); i++) {
            if(a[0] == b[i]) {
                bool flag = true;
                int j;
                for(j = 1; (i+j < b.length()) && (j < a.length()); j++)
                    if(b[i+j] != a[j])
                        flag = false;
                 if(flag && j == a.length()) 
                    return true;
            }
        }
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words.size(); j++) {
                if(i == j) continue;
                if(isSubstring(words[i],words[j])) {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
