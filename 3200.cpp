class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int rHeight = 0, temp = 1, bHeight = 0, r = red, b = blue;
        while(red + blue >= temp) {
            if(temp % 2 == 0) {
                if(blue >= temp) 
                    blue -= temp, temp++, rHeight++;
                else 
                    break;
            }
            else {
                if(red >= temp) 
                    red -= temp, temp++, rHeight++;
                else 
                    break;
            }
        }
        temp = 1, red = r, blue = b;
        while(red + blue >= temp) {
            if(temp % 2 == 0) {
                if(red >= temp) 
                    red -= temp, temp++, bHeight++;
                else 
                    break;
            }
            else {
                if(blue >= temp) 
                    blue -= temp, temp++, bHeight++;
                else 
                    break;
            }
        }
        return max(rHeight, bHeight);
    }
};
