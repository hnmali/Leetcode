class Solution {
public:
    int alternateDigitSum(int n) {
        string num = to_string(n);
        int ans = 0, sign = 1;
        for (int i = 0; i < num.length(); i++) {
            ans += (num[i]-'0')*sign;
            sign *= -1;
        }
        return ans;
    }
};
