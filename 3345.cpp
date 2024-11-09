class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1) {
            int product = 1, temp = n;
            while(temp) {
                int rem = temp%10;
                product *= rem;
                temp /= 10;
            }
            if(product%t == 0)
                return n;
            n++;
        }
    }
};
