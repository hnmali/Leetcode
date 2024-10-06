class Solution {
public:
    string itob(int num) {
        if (num == 0) 
            return "0";
        string binary = "";
        while (num > 0) {
            binary = (num % 2 == 0 ? "0" : "1") + binary;
            num /= 2;
        }
        return binary;
    }
    int maxGoodNumber(vector<int>& nums) {
        vector<int> ans; 
        string temp;
        temp = itob(nums[0])+itob(nums[1])+itob(nums[2]);
        ans.push_back(stoi(temp,nullptr,2));
        temp = itob(nums[0])+itob(nums[2])+itob(nums[1]);
        ans.push_back(stoi(temp,nullptr,2));
        temp = itob(nums[1])+itob(nums[0])+itob(nums[2]);
        ans.push_back(stoi(temp,nullptr,2));
        temp = itob(nums[1])+itob(nums[2])+itob(nums[0]);
        ans.push_back(stoi(temp,nullptr,2));
        temp = itob(nums[2])+itob(nums[1])+itob(nums[0]);
        ans.push_back(stoi(temp,nullptr,2));
        temp = itob(nums[2])+itob(nums[0])+itob(nums[1]);
        ans.push_back(stoi(temp,nullptr,2));
        sort(ans.begin(),ans.end());
        return ans[5];
    }
};
