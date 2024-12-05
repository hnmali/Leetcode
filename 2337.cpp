class Solution {
public:
    bool canChange(string start, string target) {
        if (start == target) 
            return true;
        int cntL = 0, cntR = 0;
        for (int i = 0; i < start.length(); i++) {
            char curr = start[i];
            char goal = target[i];
            if (curr == 'R') {
                if (cntL > 0) 
                    return false;
                cntR++;
            }
            if (goal == 'L') {
                if (cntR > 0) 
                    return false;
                cntL++;
            }
            if (goal == 'R') {
                if (cntR == 0) 
                    return false;
                cntR--;
            }
            if (curr == 'L') {
                if (cntL == 0) 
                    return false;
                cntL--;
            }
        }
        return (cntL==0 && cntR==0);
    }
};
