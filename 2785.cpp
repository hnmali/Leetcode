class Solution {
private:
    bool isVowel(char ch) {
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }
public:
    string sortVowels(string s) {
        vector<char> v;
        for(int i = 0; i < s.size(); i++)
            if(isVowel(s[i]))
                v.push_back(s[i]);
        sort(v.begin(), v.end());
        int i = 0;
        for(int j = 0; j < s.size(); j++) 
            if(isVowel(s[j])) 
                s[j] = v[i++];
        return s;
    }
};
