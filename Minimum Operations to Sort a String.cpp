class Solution {
public:
bool issorted(string s){
    return is_sorted(begin(s),end(s));
}
    int minOperations(string s) {
      string temp=s;
      int n=s.size();
      if(issorted(temp)) return 0;
       sort(begin(temp),begin(temp)+n-1);
       if(issorted(temp)) return 1;
       temp=s;
       sort(begin(temp)+1,end(temp));
       if(issorted(temp)) return 1;
       temp=s;
       sort(begin(temp),begin(temp)+n-1);
        sort(begin(temp)+1,end(temp));
        if(issorted(temp)) return 2;
        temp=s;
        sort(begin(temp)+1,end(temp));
        sort(begin(temp),begin(temp)+n-1);
         if(issorted(temp)) return 2;
         if(s.size()>2){
            return 3;
         }
         return -1;



    }
};
