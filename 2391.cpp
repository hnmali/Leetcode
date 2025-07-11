class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int g = 0, p = 0, m = 0, time = 0;
        for(int i = 0; i < garbage.size(); i++) {
            time += garbage[i].size();
            if(garbage[i].find('G') != string::npos)
                g = i;
            if(garbage[i].find('M') != string::npos)
                m = i;
            if(garbage[i].find('P') != string::npos)
                p = i;
        }
        for(int i = 0; i < travel.size(); i++) {
            if(i < g)
                time += travel[i];
            if(i < m)
                time += travel[i];
            if(i < p)
                time += travel[i];
        }
        return time;
    }
};
