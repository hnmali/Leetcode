class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int ans = 0;
        while (i < j) {
            int temp;
            if (height[i] < height[j]) {
                temp = height[i] * (j - i);
                if (ans < temp)
                    ans = temp;
                i++;
            }
            else {
                temp = height[j] * (j - i);
                if (ans < temp)
                    ans = temp;
                j--;
            }
        }
        return ans;
    }
};
