class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> cnt(26);
        sort(word.begin(), word.end());
        for(int i = 0; i < word.size(); i++) {
            if(i != 0 and (word[i] == word[i-1]))
                continue;
            char ch = tolower(word[i]);
            cnt[ch-'a']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
            if(cnt[i] > 1)
                ans++;
        return ans;
    }
};
