class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0, curr = capacity;
        for(int i = 0; i < plants.size(); i++) {
            curr -= plants[i];
            if(curr < 0) {
                steps += 2*i;
                curr = capacity - plants[i];
            }
            steps++; 
        }
        return steps;
    }
};
