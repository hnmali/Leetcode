class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> digitCnt(10, 0), res;
        for (int i = 0; i < digits.size(); i++)
            digitCnt[digits[i]]++;
        for (int i = 1; i <= 9; i++) {
            if (digitCnt[i] == 0) continue;
            digitCnt[i]--;
            for (int j = 0; j <= 9; j++) {
                if (digitCnt[j] == 0) continue;
                digitCnt[j]--;
                for (int k = 0; k <= 8; k += 2) {
                    if (digitCnt[k] == 0) continue;
                    res.push_back(i*100 + j*10 + k);
                }
                digitCnt[j]++;
            }
            digitCnt[i]++;
        }
        return res;
    }
};
