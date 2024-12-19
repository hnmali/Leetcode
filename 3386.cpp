class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int index = events[0][0], time = events[0][1];
        for(int i = 1; i < events.size(); i++) {
            int currTime = events[i][1] - events[i-1][1]; 
            if(currTime > time) {
                time = currTime;
                index = events[i][0];
            }
            else if (currTime == time)
                index = min(index, events[i][0]);
        }
        return index;
    }
};
