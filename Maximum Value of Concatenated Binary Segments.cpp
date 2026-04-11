class Solution {
public:
    int maxValue(vector<int>& nums1, vector<int>& nums0) {
        int n = nums1.size();
        const int MOD = 1e9+7;

        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums1[i], nums0[i]});
        }

      
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            string A(a.first, '1');
            A += string(a.second, '0');

            string B(b.first, '1');
            B += string(b.second, '0');

            return A + B > B + A;
        });

        long long result = 0;

        for(auto &p : v){
            int ones = p.first;
            int zeros = p.second;

            while(ones--){
                result = (result*2 + 1) % MOD;
            }
            while(zeros--){
                result = (result*2) % MOD;
            }
        }

        return result;
    }
};
