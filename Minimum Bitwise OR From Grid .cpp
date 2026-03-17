class Solution {
public:
    int minimumOR(vector<vector<int>>& grid) {
       int m = grid.size();
        int result = 0;

        for (int i = 17; i >= 0; i--) {
            int target = result;
            bool possible = true;

            for (const auto& row : grid) {
                bool row_ok = false;
                for (int val : row) {
                    if ((val | target) == target) {
                        row_ok = true;
                        break;
                    }
                }
                if (!row_ok) {
                    possible = false;
                    break;
                }
            }

            if (!possible) {
                result |= (1 << i);
            }
        }

        int final_res = 0;
        for (int i = 17; i >= 0; i--) {
            int test = final_res | ((1 << i) - 1);
            bool possible = true;
            for (const auto& row : grid) {
                bool row_ok = false;
                for (int val : row) {
                    if ((val | test) == test) {
                        row_ok = true;
                        break;
                    }
                }
                if (!row_ok) {
                    possible = false;
                    break;
                }
            }
            if (!possible) {
                final_res |= (1 << i);
            }
        }
        return final_res; 
    }
};
