class Solution {
public:
    string getSmallestString(string s) {
        for(int i=1; i<s.length(); i++){
            int curr = s[i] - '0';
            int prev = s[i-1] - '0';
            if(!((curr&1)^(prev&1))){
                if(prev > curr){
                    swap(s[i], s[i-1]);
                    break;
                }
            }
        }
        return s;
    }
};
