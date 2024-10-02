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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* ans(vector<int>&op,int start,int end){
if(start>end){
   return NULL;
}
        int mid=(start+end)/2;
        int element=op[mid];
        TreeNode* root=new TreeNode (element);
        root->left=ans(op,start,mid-1);
        root->right=ans(op,mid+1,end);
        return root;
            
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>op;
        ListNode*curr=head;
        while(curr!=NULL){
             op.push_back(curr->val);
            curr=curr->next;
        }
        int s=0;
        int e=op.size()-1;
        return ans(op,s,e);
    }
};