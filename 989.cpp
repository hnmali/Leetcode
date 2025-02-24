class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        int n = nums.size();
        int carry = 0;
        for(int i = n-1; i >= 0; i--) {
            int temp = k % 10;
            temp += carry + nums[i];
            nums[i] = temp % 10;
            carry = temp/10;
            k /= 10;
        } 
        while(k) {
            if(carry) {
                k += carry;    
                carry /= 10;
            }
            nums.insert(nums.begin(),k%10);
            k /= 10;
        }
        if(carry)
            nums.insert(nums.begin(),carry);
        return nums;
    }
};
