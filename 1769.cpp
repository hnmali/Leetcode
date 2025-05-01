class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> lSum(n, 0), rSum(n, 0), res(n, 0);
        int count = boxes[0] - '0';
        for (int i = 1; i < n; i++) {
            lSum[i] = lSum[i - 1] + count;
            count += boxes[i] - '0';
        }
        count = boxes[n-1] - '0';
        for (int i = n - 2; i >= 0; i--) {
            rSum[i] = rSum[i + 1] + count;
            count += boxes[i] - '0';
        }
        for (int i = 0; i < n; i++) 
            res[i] = lSum[i] + rSum[i];
        return res;
    }
};
