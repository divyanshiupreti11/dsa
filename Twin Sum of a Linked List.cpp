class Solution {
public:
   
    int pairSum(ListNode* head) {
         vector<int> arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int result=INT_MIN;
        int i=0,j=arr.size()-1;
        while(i<j){
            int sum=arr[i]+arr[j];
            result=max(result,sum);
            i++;
            j--;

        }
        return result;
    }
};
