class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int even=0;
        int odd=0;
        if(n==1) return true;
        for(int x:nums1){
            if(x%2==0) even++;
            else odd++;
        }
        if(even>0&&odd>0) return true;
        if(even>1 || odd>1) return true;
        return false;
    }
};
