class Solution {
public:
    int minChanges(int n, int k) {
        int ans = 0;
        bitset<32> nBin(n), kBin(k);
        for (int i = 0; i < 32; i++) {
            if (nBin[i] != kBin[i]) {
                if(nBin[i] == 0)
                    return -1;
                ans++;
            }
        }
        return ans;
    }
};
