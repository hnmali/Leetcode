class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> isBroken(26, false);
        for(int i = 0; i < brokenLetters.size(); i++)
            isBroken[brokenLetters[i] - 'a'] = true;
        int i = 0, cnt = 0;
        while(i < text.size()) {
            bool canTyped = true;
            while(i < text.size() && text[i] != ' ') {
                if(isBroken[text[i]-'a']) 
                    canTyped = false;
                i++;
            }
            i++;
            if(canTyped)
                cnt++;
        }
        return cnt;
    }
};
