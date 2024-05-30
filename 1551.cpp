class Solution {
public:
    int minOperations(int n) {
        vector<int> arr(n);
        int ans = 0;
        for (int i = 0; i < n; i++) 
            arr[i] = (2*i) + 1;
        for (int i = 0; i < n/2; i++) {
            ans += (n-arr[i]);
        }
        return ans;
    }
};
