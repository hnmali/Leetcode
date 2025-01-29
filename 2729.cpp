class Solution {
public:
    bool isFascinating(int n) {
        string s = to_string(n);
        s += to_string(n*2) + to_string(n*3);
        vector<int> cnt(10);
        for(int i = 0; i < s.size(); i++)
            cnt[s[i]-'0']++;
        if(cnt[0])
            return false;
        for(int i = 1; i < 10; i++)
            if(cnt[i] > 1)
                return false;
        return true;
    }
};
