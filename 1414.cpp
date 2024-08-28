class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fibb;
        fibb.push_back(1);
        fibb.push_back(1);
        int i = 1, ans = 0;
        while (fibb.back() < k) {
            fibb.push_back(fibb[i] + fibb[i - 1]);
            i++;
        }
        i = fibb.size() - 1; 
        while (k > 0) {
            if (fibb[i] <= k) { 
                k -= fibb[i];
                ans++;
            }
            i--; 
        }
        return ans;
    }
};
