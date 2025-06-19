class Solution {
public:
    bool isEnglishLetter(char ch) {
        if(ch >= 'a' && ch <= 'z')
            return true;
        if(ch >= 'A' && ch <= 'Z')
            return true;
        return false;
    }
    string generateTag(string caption) {
        string tag = "#";
        if(isEnglishLetter(caption[0]))
            tag += tolower(caption[0]);
        for(int i = 1; i < caption.size(); i++) {
            if(tag.size() == 100)
                break;
            if(!isEnglishLetter(caption[i]))
                continue;
            if(tag.back() == '#')
                tag += tolower(caption[i]);
            else if(caption[i-1] == ' ')
                tag += toupper(caption[i]);
            else
                tag += tolower(caption[i]);
        }
        return tag;
    }
};
