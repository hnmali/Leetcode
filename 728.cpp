class Solution {
public:
    bool selfDivide (int n) {
        if (n >= 1 and n <= 9)
            return true;
        int nCopy = n;
        while (n) {
            int rem = n % 10;
            if (rem == 0 or nCopy % rem != 0)
                return false;
            n /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (selfDivide(i))
                ans.push_back(i);
        }
        return ans;
    }
};
