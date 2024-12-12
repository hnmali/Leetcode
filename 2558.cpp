class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        int n = gifts.size()-1;
        while(k--) {
            sort(gifts.begin(),gifts.end());
            gifts[n] = sqrt(gifts[n]);
        }
        for(int i = 0; i <= n; i++)
            ans += gifts[i];
        return ans;
    }
};
