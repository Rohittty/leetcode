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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>ans;
        ListNode*curr=head;
        while(curr!=NULL){
        ans.push_back(curr->val);
            curr=curr->next;

}
        swap(ans[k-1],ans[ans.size()-k]);
        cout<<ans[k-1];
        cout<<ans[ans.size()-k];
        ListNode* rohit=head;
        int i=0;
        while(rohit!=NULL){

 if(rohit->val!=ans[i]){

    rohit->val=ans[i];
}
        rohit=rohit->next;
            i++;
}
        return head;
    }
};