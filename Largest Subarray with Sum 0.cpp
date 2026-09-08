class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        int maxi=0;
        int sum=0;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0) maxi=i+1;
            else{
                if(mpp.find(sum)!=mpp.end()){
                    maxi=max(maxi,i-mpp[sum]);
                }
                else{
                    mpp[sum]=i;
                }
            }
        }
        return maxi;
    }
};
