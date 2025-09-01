class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>> freq(256);
        for (int i = 0; i < 256; i++)
            freq[i] = {char(i), 0};
        for (int i = 0; i < s.size(); i++)
            freq[s[i]].second++;
        sort(freq.begin(), freq.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        string ans;
        for (int i = 0; i < 256; i++)
            if (freq[i].second)
                ans.append(freq[i].second, freq[i].first);
            else
                break;
        return ans;
    }
};
