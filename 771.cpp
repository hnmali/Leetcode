class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<bool> lower(26,false), upper(26,false);
        for(int i = 0; i < jewels.size(); i++) {
            if(jewels[i] >= 'a' && jewels[i] <= 'z')
                lower[jewels[i] - 'a'] = true;
            else
                upper[jewels[i] - 'A'] = true;
        }
        int cnt = 0;
        for(int i = 0; i < stones.size(); i++) {
            if(stones[i] >= 'a' && lower[stones[i]-'a'])
                cnt++;
            else if(upper[stones[i]-'A'])
                cnt++;
        }
        return cnt;
    }
};
