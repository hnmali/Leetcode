class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        if (suits[0] == suits[1] && suits[1] == suits[2] &&
            suits[2] == suits[3] && suits[3] == suits[4])
            return "Flush";
        vector<int> cards(13);
        for (int i = 0; i < 5; i++) {
            cards[ranks[i]-1]++;
        }
        for (int i = 0; i < 13; i++) {
            if (cards[i] >= 3)
                return "Three of a Kind";
        }
        for (int i = 0; i < 13; i++) {
            if (cards[i] == 2)
                return "Pair";
        }
        return "High Card";
    }
};
