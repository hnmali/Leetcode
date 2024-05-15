class Solution {
public:
    bool canWinNim(int n) {
        if (n <= 3 or n % 4 != 0)
            return true;
        else
            return false;
    }
};
