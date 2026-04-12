class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int total1 = 0;
        for (char c : s) if (c == '1') total1++;
        int total0 = n - total1;

        unordered_map<int, vector<int>> pos;
        int onesCount = 0;
        pos[0].push_back(0);
        
        int maxL = 0;
        for (int j = 1; j <= n; j++) {
            if (s[j - 1] == '1') onesCount++;
            
            int val = j - 2 * onesCount;

            if (pos.count(val)) {
                maxL = max(maxL, j - pos[val][0]);
            }

            if (pos.count(val - 2)) {
                auto it = lower_bound(pos[val - 2].begin(), pos[val - 2].end(), j - 2 * total1);
                if (it != pos[val - 2].end()) maxL = max(maxL, j - *it);
            }

            if (pos.count(val + 2)) {
                auto it = lower_bound(pos[val + 2].begin(), pos[val + 2].end(), j - 2 * total0);
                if (it != pos[val + 2].end()) maxL = max(maxL, j - *it);
            }

            pos[val].push_back(j);
        }
        return maxL;
    }
};
