class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int copy = x;
        int ans = 0;
        while(copy) {
            int rem = copy % 10;
            ans += rem;
            copy /= 10;
        }
        if (x % ans == 0)
            return ans;
        return -1;
    }
};
