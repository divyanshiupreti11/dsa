class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int n=nums1.size();
        sort(nums1.begin(),nums1.end());
        int mn=nums1[0];
        int even=0;
        int odd=0;
        for(int x:nums1){
            if(x%2==0) even++;
            else odd++;
        }
        if(mn%2==1) return true;
        return(even==n||odd==n);
    }
};
