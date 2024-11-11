class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        if(nums.size() == 1) return true;
        vector<bool> prime(1001,true);
        prime[0] = prime[1] = 0;
        for(int i = 2; i <= 1000; i++) {
            if(prime[i]) {
                for(int j = 2*i; j <= 1000; j += i)
                    prime[j] = false;
            }
        }
        for(int i = nums[0]-1; i >= 2; i--) {
            if(prime[i] && nums[0] - i > 0) {
                nums[0] -= i;
                break;
            }
        }
        for(int i = 1; i < nums.size(); i++) {
            int temp = -1;
            for(int j = nums[i]-1; j >= 2; j--) {
                if (prime[j] && nums[i] - j > nums[i - 1]) {
                    temp = j;
                    break;
                }
            }
            if(temp != -1)
                nums[i] -= temp;
            if(nums[i] <= nums[i-1])
                return false;
        }
        return true;
    }
};
