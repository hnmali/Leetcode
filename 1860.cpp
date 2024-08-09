class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int crashTime = 1;
        while(1) {
            if(crashTime > memory1 and crashTime > memory2)
                break;
            else if (memory2 > memory1) 
                memory2 -= crashTime;
            else
                memory1 -= crashTime;
            crashTime++;
        }
        return {crashTime,memory1,memory2};
    }
};
