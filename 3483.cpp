class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> unqNum;
        int n = digits.size();
        for (int i = 0; i < n; ++i) {
            if (digits[i] == 0)
                continue;
            for (int j = 0; j < n; ++j) {
                if (i == j)
                    continue;
                for (int k = 0; k < n; ++k) {
                    if (k == i || k == j)
                        continue;
                    if (digits[k]&1)
                        continue; 
                    int num = digits[i]*100 + digits[j]*10 + digits[k];
                    unqNum.insert(num);
                }
            }
        }
        return unqNum.size();
    }
};
