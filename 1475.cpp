class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> finalPrices(n);
        for(int i = 0; i < n; i++) {
            int discount = 0;
            for(int j = i+1; j < n; j++) {
                if(prices[i] >= prices[j]) {
                    discount = prices[j];
                    break;
                }
            }
            finalPrices[i] = prices[i] - discount;
        }
        return finalPrices;
    }
};
