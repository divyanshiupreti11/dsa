class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
      multiset<int> ms;
        long long ans=0;
        int l=0;
        for(int r=0;r<nums.size();r++){
            ms.insert(nums[r]);
            while(!ms.empty() && (long long) (*ms.rbegin()-*ms.begin())*(r-l+1)>k){
                ms.erase(ms.find(nums[l]));
                l++;
            }
            ans+=r-l+1;
        }
        return ans;
    }
};
