class Solution {
public:
    int minimumSum(int num) {
        vector<int> digit;
        while (num) {
            int rem = num % 10;
            digit.push_back(rem);
            num /= 10;
        }
        sort(digit.begin(), digit.end());
        int num1 = 0, num2 = 0;
        num1 = (digit[0] * 10) + digit[2];
        num2 = (digit[1] * 10) + digit[3];
        return num1 + num2;
    }
};
