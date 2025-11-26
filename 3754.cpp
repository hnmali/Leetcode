class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = 0, sum = 0;
        while(n) {
            int rem = n % 10;
            if(rem)
                num = num*10 + rem;
            sum += rem;
            n /= 10;
        }
        while(num) {
            int rem = num % 10;
            n = n*10 + rem;
            num /= 10;
        }
        return sum * n;
    }
};
