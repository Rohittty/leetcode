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
    int maxLevelSum(TreeNode* root) {
         if(root==NULL){
            return -1;
        }

        queue<TreeNode*> q;
    q.push(root);
        int maxi=INT_MIN;
    

    while(!q.empty()) {
        int size=q.size();
         int sum=0;
        for(int i=0;i<size;i++){
        TreeNode*temp = q.front();
        q.pop();
            if(temp ->left!=NULL) {
                q.push(temp ->left);
            }

            if(temp ->right!=NULL) {
                q.push(temp ->right);
            }
            
            sum+=temp->val;
        }
        
        maxi=max(maxi,sum);

    }

    q.push(root);
    int count=0;

    while(!q.empty()) {
        int size=q.size();
         int sum=0;
        for(int i=0;i<size;i++){
        TreeNode*temp = q.front();
        q.pop();
            if(temp ->left!=NULL) {
                q.push(temp ->left);
            }

            if(temp ->right!=NULL) {
                q.push(temp ->right);
            }
            
            sum+=temp->val;
        }
                count++;
        if(sum==maxi)return count;

    }
        return -1;
    }
};