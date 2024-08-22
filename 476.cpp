class Solution {
public:
    int findComplement(int num) {
        if (num == 0)
            return 1;
        int numCopy = num, digit = 0;
        while (num) {
            digit++;
            num >>= 1; 
        }
        return pow(2,digit) - numCopy - 1;
    }
};
