class Solution {
public:
    int sumOddLengthSubarrays(std::vector<int>& arr) {
        int ans = 0;
        for (int i = 0; i < arr.size(); i += 2) {
            for (int j = 0; j <= arr.size() - i - 1; j++) {
                for (int k = j; k <= j + i; k++)
                    ans += arr[k];
            }
        }
        return ans;
    }
};
