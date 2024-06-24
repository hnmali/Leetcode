class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int digit = 0, tempMax = -1;
            while(nums[i]) {
                digit++;
                int rem = nums[i] % 10;
                tempMax = max(tempMax,rem);
                nums[i] /= 10;
            }
            char tempM = tempMax + '0';
            string temp(digit,tempM);
            ans += stoi(temp);
        }
        return ans;
    }
};
