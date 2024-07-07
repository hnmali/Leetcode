class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int> candy(n, 0); 
        int i = 0, given = 1;
        while (candies > 0) {
            if (i == n) 
                i = 0;
            if (given > candies) 
                given = candies;
            candy[i] += given;
            candies -= given;
            given++;
            i++;
        }
        return candy;
    }
};
