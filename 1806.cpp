class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int> perm(n), arr(n);
        for (int i = 0; i < n; i++)
            perm[i] = i;
        int ans = 0;
        vector<int> original = perm; 
        do {
            for (int i = 0; i < n; i++) {
                if (i & 1) 
                    arr[i] = perm[n / 2 + (i - 1) / 2];
                else 
                    arr[i] = perm[i / 2];
            }
            ans++;
            perm = arr; 
        } while (perm != original); 
        return ans;
    }
};
