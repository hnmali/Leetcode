class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        long long vol;
        bool bulky = false, heavy = false;
        if (l >= 10000 || w >= 10000 || h >= 10000)
            bulky = true;
        else {
            vol = (long long)l * (long long)w * (long long)h;
            if (vol >= 1000000000)
                bulky = true;
        }
        if (m >= 100)
            heavy = true;
        if (heavy == bulky) {
            if (heavy == true)
                return "Both";
            return "Neither";
        }
        if (bulky)
            return "Bulky";
        return "Heavy";
    }
};
