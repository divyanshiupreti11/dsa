class Solution {
public:
    int reverseDegree(string s) {
        int res = 0;

        for (int i = 0; i < s.size(); i++) {
            int value = '{' - s[i];
            res += value * (i + 1);
        }

        return res;
    }
};
