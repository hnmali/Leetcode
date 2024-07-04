class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for (int i = 2; i <= num; i++) {
            string temp = to_string(i);
            int sum = 0;
            for (int j = 0; j < temp.length(); j++) 
                sum += temp[j] - '0';
            if (sum % 2 == 0)
                ans++;
        }
        return ans;
    }
};
