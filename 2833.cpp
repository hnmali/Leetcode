class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cntL = 0, cntR = 0, cnt = 0;
        for(int i = 0; i < moves.size(); i++)
            if(moves[i] == 'L')
                cntL++;
            else if(moves[i] == 'R')
                cntR++;
            else
                cnt++;
        return abs(cntR-cntL) + cnt;
    }
};
