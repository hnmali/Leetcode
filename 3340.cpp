class Solution {
public:
    bool isBalanced(string num) {
        int sumO = 0, sumE = 0;
        for(int i = 0; i < num.length(); i++) {
            if(i&1)
                sumO += num[i] - '0';
            else
                sumE += num[i] - '0';
        }
        return sumO == sumE;
    }
};
