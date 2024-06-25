class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> box(highLimit+1);
        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = 0, temp = i;
            while(temp) {
                int rem = temp % 10;
                sum += rem;
                temp /= 10;
            }
            box[sum]++;
        }
        int ans = box[0];
        for (int i = 1; i <= highLimit; i++)
            ans = max(ans,box[i]);
        return ans;
    }
};
