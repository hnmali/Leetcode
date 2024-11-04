class Solution {
public:
    string compressedString(string word) {
        string comp;
        int cnt = 1;
        for(int i = 1; i < word.length(); i++) {
            if(word[i] == word[i-1] and (cnt < 9))
                cnt++;
            else {
                comp.push_back(cnt+'0');
                comp.push_back(word[i-1]);
                cnt = 1;
            }
        }
        comp.push_back(cnt+'0');
        comp.push_back(word.back());
        return comp;
    }
};
