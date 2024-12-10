class Solution {
public:
    int smallestNumber(int n) {
        for(int i = 1; ;i++) {
            int num = pow(2,i);
            if(num > n)
                return num-1;
        }
    }
};
