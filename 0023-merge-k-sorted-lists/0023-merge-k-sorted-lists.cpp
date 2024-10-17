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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       vector<int>op;
        for(int i=0;i<lists.size();i++){
            ListNode* curr=lists[i];
            while(curr!=NULL){
                op.push_back(curr->val);
                curr=curr->next;
            }
        }
        sort(op.begin(),op.end());
        ListNode*ans=new ListNode();
        ListNode*k=new ListNode();
        ans->next=k;
        for(int i=0;i<op.size();i++){
            ListNode* temp=new ListNode(op[i]);
            k->next=temp;
            k=k->next;
        }
        return ans->next->next;
        
    }
};