class Solution {
public:
    int maxProduct(int n) {
        int max1 = -1, max2 = -1;
        while(n) {
            if((n%10) >= max1) {
                max2 = max1;
                max1 = n%10;
            }
            else if ((n%10) >= max2)
                max2 = n%10;
            n /= 10;
        }
        return max1 * max2;
    }
};
