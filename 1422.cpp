class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        vector<int> prefix(n);
        prefix[n-1] = s[n-1] - '0';
        for(int i = n-2; i >= 0; i--) 
            prefix[i] = prefix[i+1]+s[i]-'0';
        int ans = 0, cnt0 = 0;
        if(s[0] == '0') cnt0++;
        for(int i = 1; i < n-1; i++) {
            if(s[i] == '0')
                cnt0++;
            ans = max(ans,(cnt0+prefix[i]));
        }
        ans = max(ans,(cnt0+prefix[n-1]));
        return ans;
        
    }
};
