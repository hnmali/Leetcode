class Solution {
public:
    int countCollisions(string dir) {
        int res = 0, flag = -1;
        for (int i = 0; i < dir.size(); i++) {
            if (dir[i] == 'L') {
                if (flag >= 0) {
                    res += flag + 1;
                    flag = 0;
                }
            } 
            else if (dir[i] == 'S') {
                if (flag > 0) 
                    res += flag;
                flag = 0;
            } 
            else 
                if (flag >= 0) 
                    flag++;
                else 
                    flag = 1;
        }
        return res;
    }
};
