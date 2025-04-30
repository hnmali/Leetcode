class Solution {
public:
    bool digit( int n) {
        int count = 0;
        while ( n != 0) {
            n /= 10;
            count++;
        }
        if ( count % 2 == 0 )
            return true;
        return false;
    }
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for ( int i = 0; i < nums.size(); i++ ) {
            if (digit(nums[i]))
                ans++;
        }
        return ans;
    }
};
