class Solution {
public:
    string losingPlayer(int x, int y) {
        if(min(x,y/4)&1)
            return "Alice";
        return "Bob";
    }
};
