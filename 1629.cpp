class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int duration = releaseTimes[0];
        char ans = keysPressed[0];
        for (int i = 1; i < keysPressed.length(); i++) {
            int temp = releaseTimes[i] - releaseTimes[i-1];
            if (temp > duration) {
                duration = temp;
                ans = keysPressed[i];
            }
            else if (temp == duration && ans < keysPressed[i])
                ans = keysPressed[i];
        }
        return ans;
    }
};
