class Solution {
public:
    bool doesAliceWin(string s) {
        int vowel = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or
                s[i] == 'o' or s[i] == 'u')
                vowel++;
        }
        if(vowel == 0)
            return false;
        if(vowel&1)
            return true;
        return true;
    }
};
