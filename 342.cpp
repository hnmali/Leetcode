class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0 || (n & (n - 1))) 
        return false;
        int position = 0;
        while (n > 1) {
            n >>= 1;  
            position++;
        }
        return position % 2 == 0; 
    }
};
