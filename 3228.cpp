class Solution {
public:
    int maxOperations(string s) {
        int cnt1 = 0, ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                while ((i + 1) < s.length() && s[i + 1] == '0') 
                    i++;
                ans += cnt1;
            } 
            else 
                cnt1++;
        }
        return ans;
    }
};
