class Solution {
public:
    bool isNoZero(int n) {
        while(n) {
            if(!(n%10))
                return true;
            n /= 10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i = n-1; i >= 0; i--) {
            if(isNoZero(i))
                continue;
            if(isNoZero(n-i))
                continue;
            return {i,n-i};
        }
        return {-1,-1};
    }
};
