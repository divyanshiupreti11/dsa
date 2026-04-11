class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int nextPrime(int x){
        while(true){
            if(isPrime(x)) return x;
            x++;
        }
    }
    int nextNonPrime(int x){
        while(true){
            if(!isPrime(x)) return x;
            x++;
        }
    
    }
    int minOperations(vector<int>& nums) {
       int ops=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                int target=nextPrime(nums[i]);
            ops+=(target-nums[i]);
            } else{
              int target=nextNonPrime(nums[i]);
                ops+=(target-nums[i]);
            }
        }
        return ops;
    }
};©leetcode
