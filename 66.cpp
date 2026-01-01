class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i =digits.size()-1; i>=0; i--) {
            int update = digits[i] + carry;
            digits[i] = update%10;
            carry = update/10;
        }
        if(carry!=0)
            digits.insert(begin(digits), carry);
        return digits;
    }
};
