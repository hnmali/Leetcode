class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int l = 0, r = 0, cnt1 = 0, cnt0 = 0, ans = 0;
        while (r < s.size()) {
            if (s[r] == '0') 
                cnt0++;
            else 
                cnt1++;
            while (cnt0 > k && cnt1 > k) { 
                if (s[l] == '0') 
                    cnt0--;
                else 
                    cnt1--;
                l++;
            }
            ans += (r - l + 1);
            r++;
        }
        return ans;
    }
};
