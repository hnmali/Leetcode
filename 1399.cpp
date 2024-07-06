class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> cnt(37, 0); 
        for (int i = 1; i <= n; i++) {
            int temp = i, sum = 0;
            while(temp) {
                int rem = temp % 10;
                sum += rem;
                temp /= 10;
            }
            cnt[sum]++;
        }
        int maxSize = 0, count = 0;
        for (int i = 0; i < 37; i++)
            maxSize = max(maxSize,cnt[i]);
        for (int i = 1; i <= 36; i++) {
            if (cnt[i] == maxSize) 
                count++;
        }
        return count;
    }
};
