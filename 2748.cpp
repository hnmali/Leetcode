class Solution {
public:
    int gcd(int a, int b) {
        if(b == 0)
            return a;
        return gcd(b,a%b);
    }
    int countBeautifulPairs(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            int first = s[0] - '0';
            for(int j = i+1; j < nums.size(); j++) {
                if(gcd(nums[j]%10, first) == 1)
                    cnt++;
            }
        }
        return cnt;
    }
};
