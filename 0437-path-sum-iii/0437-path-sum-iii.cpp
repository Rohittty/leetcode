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
    void func(TreeNode*root,int &c,vector<int>&v,int t){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        long long  sum=0;
        for(int i=v.size()-1;i>=0;i--){
            sum+=v[i];
            if(sum==t){
                c++;
            }
        }
        func(root->left,c,v,t);
        func(root->right,c,v,t);
        v.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        int c=0;
        func(root,c,v,targetSum);
        return c;
    }
};