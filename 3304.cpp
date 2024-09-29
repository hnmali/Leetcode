class Solution {
public:
    char kthCharacter(int k) {
        string ans = "a";
        char up = 'b';
        
        while (ans.size() < k) {
            string temp;
            for (int i = 0; i < ans.size(); ++i) {
                char c = ans[i];
                if (c == 'z') 
                    temp += 'a';
                else 
                    temp += c + 1;
            }
            ans += temp;
        }
        return ans[k - 1];
    }
};
