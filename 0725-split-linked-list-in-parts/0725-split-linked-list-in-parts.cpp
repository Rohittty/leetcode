/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
         int len=0;
        vector<ListNode*>ans(k,NULL);
        ListNode*temp1=head;
        while(temp1!=NULL){
          len++;
            temp1=temp1->next;
}
        int child=len/k;
        int extrachild=len%k;
       ListNode*temp=head;
        ListNode*prev=NULL;
        int i=0;
        while(temp!=NULL&&i<k){
        ans[i]=temp;
            for(int j=0;j<child+(extrachild>0);j++){
              
               prev=temp;
                temp=temp->next;
            
            }
            prev->next=NULL;
            extrachild--;
            i++;
        
        
        
        
        
        }
        return ans;
    }
};