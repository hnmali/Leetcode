class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) 
            return -1;
        int cnt = 0, num = 1;
        while (k) {
            num %= k;
            cnt++;
            if (num == 0) 
                return cnt;
            num = num * 10 + 1;
        }
        return -1;
    }
};
