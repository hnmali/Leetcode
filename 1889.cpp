class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26);
        for(int i = 0; i < text.size(); i++)
            freq[text[i]-'a']++;
        int cnt = min(freq[0],freq[1]);
        cnt = min(cnt, (freq['l'-'a']/2));
        cnt = min(cnt, (freq['o'-'a']/2));
        cnt = min(cnt, freq['n'-'a']);
        return cnt;
    }
};
