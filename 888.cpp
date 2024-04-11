class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
       long long aSum = 0, bSum = 0;
       int n = aliceSizes.size();
       int m = bobSizes.size();

       for(int i=0; i<n; i++){
        aSum += aliceSizes[i];
       } 
       for(int j=0; j<m; j++){
        bSum += bobSizes[j];
       }

      for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            long long val1 = aSum + bobSizes[j] - aliceSizes[i];
            long long val2 = bSum + aliceSizes[i] - bobSizes[j];

            if(val1 == val2){
                return {aliceSizes[i], bobSizes[j]};
            }
        }
      }

      return {0, 0};
    }
};
