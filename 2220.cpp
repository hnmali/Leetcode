class Solution {
public:
    string intToBinary(int n) {
        string binary;
        for (int i = 31; i >= 0; i--) 
            binary += (((n >> i) & 1)+'0');
        return binary; 
}
    int minBitFlips(int start, int goal) {
        string s1 = intToBinary(start);
        string s2 = intToBinary(goal);
        int ans = 0, i = s1.length()-1, j = s2.length()-1;
        while (i >= 0 and j >= 0) {
            if(s1[i] != s2[j])
                ans++;
            i--;
            j--;
        }
        while (i >= 0)
            s1[i]=='1'?ans++:ans=ans;
        while (j >= 0)
            s2[j]=='1'?ans++:ans=ans;
        return ans;
    }
};
