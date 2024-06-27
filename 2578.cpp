class Solution {
public:
    int splitNum(int num) {
        vector<int> digit;
        int n = 0, num1 = 0, num2 = 0;
        while(num) {
            int rem = num % 10;
            digit.push_back(rem);
            num /= 10;
            n++;
        }
        sort(digit.begin(),digit.end());
        for (int i = 0; i < n; i++) {
            if (i&1)
                num1 = digit[i] + num1*10;
            else
                num2 = digit[i] + num2*10;
        }
        return num1 + num2;
    }
};
