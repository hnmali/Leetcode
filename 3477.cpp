class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt = 0;
        for(int i = 0; i < fruits.size(); i++) { 
            bool flag = false;
            for(int j = 0; j < baskets.size(); j++) { 
                if((baskets[j] != -1) && (fruits[i] <= baskets[j])) {
                    flag = baskets[j] = -1;
                    break;
                }
            }
            if(!flag)
                cnt++; 
        }
        return cnt;
    }
};
