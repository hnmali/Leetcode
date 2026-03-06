class Solution {
public:
    bool checkOnesSegment(string s) {
        bool isFirst = 0;
        for(int i = s.size(); i >= 0; i--)
            if(s[i] == '0' && isFirst)
                return false;
            else if(s[i] == '1')
                isFirst = 1;
        return true;
    }
};
