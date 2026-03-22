class Solution {
public:
    int minRemovals(vector<int>& nums, int target) {
        unordered_map<int,int> dp;
        dp[0]=0;
        for(int num:nums){
            auto temp=dp;
            for(auto &[xr,len]:temp){
                int new_xr=xr^num;
                dp[new_xr]=max(dp[new_xr],len+1);
            }
        }
        if(dp.find(target)==dp.end()) return -1;
        return nums.size()-dp[target];
    }
};
