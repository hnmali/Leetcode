class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        long long base = 1;
        vector<int> ans;
        while(n) {
            int rem = n%10;
            if(rem)
                ans.push_back(rem*base);
            base *= 10;
            n /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
