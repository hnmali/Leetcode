class Solution {
public:
    bool perfectSqaure(long long b) {
        long long low = 0;
        long long high = b;    
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long square = mid * mid;
            if (square == b) 
                return true;
            else if (square < b)
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        for (long long a = 0; a*a <= c; a++) {
            long long b = c - a*a;
            if (perfectSqaure(b))
                return true;
        }
        return false;
    }
};
