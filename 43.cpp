class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") 
            return "0";
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int N = num1.size() + num2.size();
        string ans(N, '0');
        for (int i = 0; i < num2.size(); i++) {
            int digit2 = num2[i] - '0';
            for (int j = 0; j < num1.size(); j++) {
                int digit1 = num1[j] - '0', zeros = j + i;
                int carry = ans[zeros] - '0';
                int mult = digit1 * digit2 + carry;
                ans[zeros] = (mult % 10) + '0';
                ans[zeros + 1] += (mult / 10);
            }
        }
        if (ans.back() == '0') 
            ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
