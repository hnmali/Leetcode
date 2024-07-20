class Solution {
public:
    int numberOfChild(int n, int k) {
        int cycle_length = 2 * (n - 1);
        k %= cycle_length;
        if (k < n)
            return k; 
        else 
            return cycle_length - k;
    }
};
