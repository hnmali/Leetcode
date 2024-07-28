class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size(), ans = 0;
        vector<int> prefixXor(n + 1, 0);
        for (int i = 0; i < n; ++i) 
            prefixXor[i + 1] = prefixXor[i] ^ arr[i];
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (prefixXor[i] == prefixXor[j + 1]) 
                    ans += j - i;
            }
        }
        return ans;
    }
};
