class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 and 1162261467 % n == 0;
    }
};
