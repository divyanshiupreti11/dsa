class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<long long ,int> counts;
        for(long long a=1;a*a*a<n;++a){
            long long a3=a*a*a;
            for(long long b=a+1;;++b){
                long long b3=b*b*b;
                long long sum=a3+b3;
                if(sum>n) break;
                counts[sum]++;
            }
        }
        vector<int> result;
        for(auto const& [val,count]:counts){
            if(count>=2){
                result.push_back((int )val);
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};
