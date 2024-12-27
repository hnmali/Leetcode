class Solution {
public:
    int distanceTraveled(int mTank, int aTank) {
        return (mTank + min((mTank - 1) / 4, aTank)) * 10;
    }
};
