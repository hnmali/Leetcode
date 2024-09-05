class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> ans;
        int mSum = 0;
        for (int i = 0; i < rolls.size(); i++)
            mSum += rolls[i];
        int totalSum = mean * (n + rolls.size());
        int nSum = totalSum - mSum;
        if (nSum < n || nSum > n * 6) 
            return ans;  
        ans = vector<int>(n, 1);
        nSum -= n;  
        for (int i = 0; i < n && nSum > 0; i++) {
            int add = min(5, nSum); 
            ans[i] += add;
            nSum -= add;
        }
        return ans;
    }
};
