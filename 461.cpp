class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0;
        while(x && y) {
            if(x&1 ^ y&1)
                cnt++;
            x >>= 1;
            y >>= 1;
        }
        while(x) {
            if(x&1)
                cnt++;
            x >>= 1;
        }
        while(y) {
            if(y&1)
                cnt++;
            y >>= 1;
        }
        return cnt;
    }
};
