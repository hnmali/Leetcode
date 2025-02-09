class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26);
        for(int i = 0; i < s.size(); i++) 
            freq[s[i]-'a']++;
        int even = 101, odd = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i]&1)
                odd = max(odd,freq[i]);
            else if(freq[i])
                even = min(even,freq[i]);
        }
        return (odd - even);
    }
};
