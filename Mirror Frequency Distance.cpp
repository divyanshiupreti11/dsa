class Solution {
public:
    int mirrorFrequency(string s) {
       
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
       long long sum=0;
        unordered_set<char> processed;
        for(auto const& [ch,freq_c]:mp){
            if(processed.count(ch)) continue;
            char m;
            if(isdigit(ch)){
                m='9'-(ch-'0');
            }else{
                m='z'-(ch-'a');
            }
           
                int freq_m=0;
                if(mp.count(m)){
                    freq_m=mp[m];
                }
                sum+=abs(freq_c-freq_m);
            processed.insert(ch);
            processed.insert(m);
            
        }
        return (int) sum;
    }
};
