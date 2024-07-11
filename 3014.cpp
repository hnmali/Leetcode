class Solution {
public:
    int minimumPushes(string word) {
        if (word.length() <= 8)
            return word.length();
        else if (word.length() <= 16)
            return (word.length()-8)*2 + 8;
        else if (word.length() <= 24)
            return (word.length()-16)*3 + 24;
        else
            return (word.length()-24)*4 + 48;
    }
};
