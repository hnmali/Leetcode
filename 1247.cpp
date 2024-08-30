class Solution {
public:
    int minimumSwap(string s1, string s2) {
        if (s1 == s2)
            return 0;
        int cntX=0, cntY=0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i]==s2[i])
                continue;
            if(s1[i]=='x')
                cntX++;
            else
                cntY++;
        } 
        if((cntX+cntY)%2 != 0)
            return -1;
        return (cntX+1)/2 + (cntY+1)/2;
    }
};
