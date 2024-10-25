class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int sum = 0;
        for(int i = 0; i < possible.size(); i++)
            if(!possible[i])
                possible[i] = -1;
        vector<int> prefix;
        for(int i = 0; i < possible.size(); i++){
            sum += possible[i];
            prefix.push_back(sum);
        }
        for(int i = 0; i < possible.size()-1; i++) {
            if(prefix[i]>(sum-prefix[i]))
                return i+1;
        }
        return -1;
    }
};
