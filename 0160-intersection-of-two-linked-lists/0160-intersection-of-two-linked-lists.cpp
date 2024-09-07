/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL){
        return NULL;
}
        map<ListNode*,bool>visited;
        while(headA!=NULL){
   visited[headA]=true;
  headA=headA->next;
}
        while(headB!=NULL){

if(visited[headB])return headB;
            else{
   headB=headB->next;
}
}
        return NULL;
    }
};