class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans = 0, n = colors.size();
        for (int i = 1; i < n - 1; i++) {
            if ((colors[i-1] == colors[i+1]) and (colors[i] != colors[i-1]))
                ans++;
        }
        if((colors[n-2] == colors[0]) and (colors[n-1] != colors[0]))
            ans++;
        if (colors[0] != colors[1] && colors[1] == colors[n - 1]) 
            ans++;
        return ans;
    }
};
