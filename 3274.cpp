class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        if (!((c1[0]-'a'+c1[1])%2) and !((c2[0]-'a'+c2[1])%2))
            return true;
        else if (((c1[0]-'a'+c1[1])&1)and((c2[0]-'a'+c2[1])&1))
            return true;
        return false;
    }
};
