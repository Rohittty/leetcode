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
    
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(root==NULL)return NULL;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>level;
        while(!q.empty()){
            int n=q.size();
            int levelsum=0;
            while(n--){
               TreeNode*curr=q.front();
                q.pop();
                if(curr->left!=NULL){
                   q.push(curr->left);
                } 
             if(curr->right!=NULL){
                   q.push(curr->right);
                }
                levelsum+=curr->val;
            }
            level.push_back(levelsum);
                
            }
        root->val=0;
        q.push(root);
        int i=1;
        while(!q.empty()){
            int n=q.size();
            
            while(n--){
                 int siblingsum=0;
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left!=NULL){
                    siblingsum+=curr->left->val;
                    q.push(curr->left);
                }
                 if(curr->right!=NULL){
                    siblingsum+=curr->right->val;
                     q.push(curr->right);
                }
                if(curr->left){
                    curr->left->val=level[i]-siblingsum;
                    
                }
                 if(curr->right){
                    curr->right->val=level[i]-siblingsum;
                     
                }
            }
              i++;
        }
        
      return root;
    }
};