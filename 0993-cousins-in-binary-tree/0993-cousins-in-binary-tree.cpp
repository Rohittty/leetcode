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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode* ,pair<int,int>>>q;
       q.push({root,{0,0}});
        
          int xlevel,ylevel;
            int xparent,yparent;
        while(q.empty()==false){
      TreeNode* node=q.front().first;
            int level=q.front().second.first;
     int parent=q.front().second.second;
        q.pop();
            if(node->val==x){
              xlevel=level;
                xparent=parent;
            }
          else  if(node->val==y){
               ylevel=level;
                yparent=parent;
            }
            if(node->left!=NULL)
            q.push({node->left,{level+1,node->val}});
            if(node->right!=NULL)
            q.push({node->right,{level+1,node->val}});
            
        }
        if(xlevel==ylevel){
            if(xparent!=yparent)
               return true;
        }
        return false;
        
    }
};