class Solution {
public:
    bool squareIsWhite(string s) {
        int coor = s[0]-'a' + s[1]-'0';
        return !(coor&1);
    }
};
