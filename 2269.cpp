class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        string curr = "";
        int cnt = 0;
        for(int i = s.size()-k; i < s.size(); i++)
            curr += s[i];
        int n = stoi(curr);
        if(n != 0 && num % n == 0)
            cnt++;
        for(int i = s.size()-k-1; i >= 0; i--) {
            curr.pop_back();      
            curr = s[i] + curr;   
            n = stoi(curr);       
            if(n != 0 && num % n == 0) 
                cnt++;
        }
        return cnt;
    }
};
