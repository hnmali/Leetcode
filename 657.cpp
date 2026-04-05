class Solution {
public:
    bool judgeCircle(string moves) {
        int cntL = 0, cntR = 0, cntU = 0, cntD = 0;
        for(int i = 0; i < moves.size(); i++)
            if(moves[i] == 'L') 
                cntL++;
            else if(moves[i] == 'R') 
                cntR++;
            else if(moves[i] == 'U') 
                cntU++;
            else
                cntD++;
        return (cntL == cntR) && (cntU == cntD);
    }
};
