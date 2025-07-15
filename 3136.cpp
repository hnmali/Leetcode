class Solution {
public:
    bool isVowelConst(char ch) {
        unordered_set<char> st = {'a','e','i','o','u','A','E','I','O','U'};
        return st.find(ch) != st.end();
    }
    bool isValid(string word) {
        if(word.size() < 3)
            return false;
        bool isConst = false, isVowel = false;
        for(int i = 0; i < word.size(); i++) {   
            if(!isalnum(word[i]))
                return false;
            if(isalpha(word[i]) && isVowelConst(word[i]))
                isVowel = true;
            if(isalpha(word[i]) && !isVowelConst(word[i]))
                isConst = true;
        }
        return isVowel && isConst;            
    }
};
