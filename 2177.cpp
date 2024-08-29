class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long x = num/3;
        if(3*x == num)
            return {x-1,x,x+1};
        return {};
    }
};
