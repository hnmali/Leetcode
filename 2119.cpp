class Solution {
public:
    bool isSameAfterReversals(int num) {
        int reverse = 0, digit = 0;
        while (num) {
            digit++;
            int rem = num % 10;
            reverse = reverse*10 + rem;
            num /= 10;
        }
        while (reverse) {
            digit--;
            reverse /= 10;
        }
        return !digit;
    }
};
