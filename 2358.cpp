class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(),grades.end());
        int grpCnt = 0, i = 0;
        while (1) {
            grpCnt++;
            if (i+grpCnt > grades.size())
                break;
            i += grpCnt;
        }
        return grpCnt - 1;
    }
};
