class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result="";
        for(string word:words){
            int total=0;
            for(char c:word){
                total+=weights[c-'a'];
            }
                int mod=total%26;
                char mapchar='z'-mod;
                
            
            result+=mapchar;
            
        }
        return result;
    }
};
