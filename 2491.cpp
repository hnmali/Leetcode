class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long ans = 0;
        sort(skill.begin(),skill.end());
        int i = 0, j = skill.size()-1;
        int sum = skill[i++] + skill[j--];
        ans = skill[i-1]*skill[j+1];
        while (i < j) {
            if (skill[i++]+skill[j--] != sum)
                return -1;
            ans += skill[i-1]*skill[j+1];
        }
        return ans;
    }
};
