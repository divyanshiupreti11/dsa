class Solution {
public:
   int canMakeMbouq(vector<int> bloomDay,int mid,int k){
    int bouqCount=0;
    int consCount=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            consCount++;
        }else{
            consCount=0;
        }
        if(consCount==k){
            bouqCount++;
            consCount=0;
        }
    }
    return bouqCount;
   }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int start_day=0;
        int last_day=*max_element(begin(bloomDay),end(bloomDay));
        int minDay=-1;
        while(start_day<=last_day){
            int mid=start_day+(last_day-start_day)/2;
            if(canMakeMbouq(bloomDay,mid,k)>=m){
                minDay=mid;
                last_day=mid-1;
            }else{
                start_day=mid+1;
            }
        }
        return minDay;
    }
};
