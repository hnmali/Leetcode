class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0, cnt0 = 0;
        for (int i = s.length()-1; i >= 0; i--) {
            if(s[i] == '0')
                cnt0++;
            else
                ans += cnt0;
        }
        return ans;
    }
};
