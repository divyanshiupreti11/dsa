class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        vector<int> prefixGcd(n);
        for(int i=0;i<n;i++){
            mx=max(nums[i],mx);
           
            prefixGcd[i]=gcd(nums[i],mx);
            
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int l=0;
        int r=n-1;
        long long ans=0;
        while(l<r){
            ans+=gcd(prefixGcd[l],prefixGcd[r]);
            l++;
            r--;
        }
         return ans; 
    }
};
