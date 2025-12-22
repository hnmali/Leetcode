class Solution {
public:
    int mirrorDistance(int n) {
        int revN = 0, oN = n;
        while(n) {
            int rem = n % 10;
            revN = revN*10 + rem;
            n /= 10;
        }
        return abs(oN - revN);
    }
};
