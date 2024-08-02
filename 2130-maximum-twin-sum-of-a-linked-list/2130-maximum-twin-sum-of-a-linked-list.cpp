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
    int pairSum(ListNode* head) {
        vector<int>arr;
        ListNode*temp=head;
        while(temp!=NULL){
          arr.push_back(temp->val);
            temp=temp->next;
}
      int sum=0;
        int maxi=INT_MIN;
        int i=0;
        int j=arr.size()-1;
        while(i<j){

        sum=arr[i]+arr[j];
            maxi=max(maxi,sum);
            i++;
            j--;
        
        }
        return maxi;;
    }
};