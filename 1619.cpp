class Solution {
public:
    double trimMean(vector<int>& arr) {
        int fivePer = arr.size()/20;
        double mean = 0;
        sort(arr.begin(),arr.end());
        for(int i = fivePer; i < arr.size()-fivePer; i++)
            mean += arr[i];
        mean = mean/(arr.size() - 2*fivePer);
        return mean;
    }
};
