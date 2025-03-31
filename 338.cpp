class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        for (int i = 0; i <= n; i++) {
            int count = 0, num = i;
            while (num) {
                count += (num) & 1;
                num >>= 1;
            }
            arr.push_back(count);
        }
        return arr;
    }
};
