class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev=head;
        ListNode* curr=head->next;
        int i=1;
        int prevCP=0;
        int firstCP=0;
        int minDist=INT_MAX;
        while(curr->next!=NULL){
        if((curr->val<prev->val && curr->val<curr->next->val)|| (curr->val>prev->val && curr->val>curr->next->val)){
            if(prevCP==0){
                prevCP=i;
                firstCP=i;
            }else{
                minDist=min(minDist,i-prevCP);
                prevCP=i;
            }
        }
        i++;
        prev=curr;
        curr=curr->next;
        }
        if(minDist==INT_MAX){
            return{-1,-1};
        
        }
        return {minDist,prevCP-firstCP};
    }
};
