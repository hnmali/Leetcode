class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles, emptyBottles = numBottles;
        int fullBottles = 0;
        while (numExchange <= emptyBottles) {
            while (emptyBottles >=  numExchange) {
                fullBottles++;
                emptyBottles -= numExchange;
                numExchange++;
            }
            ans += fullBottles;
            emptyBottles += fullBottles;
            fullBottles = 0;
        }
        return ans;
    }
};
