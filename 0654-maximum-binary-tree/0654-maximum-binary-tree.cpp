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
    
    TreeNode* solve(vector<int>&nums,int start,int end){
        if(start==end){
            return NULL;
        }
             int maxindex=start;
        for(int i=start+1;i<end;i++){
           if (nums[i]>nums[maxindex]){
              maxindex=i;

}
        }
        TreeNode*root=new TreeNode(nums[maxindex]);
           root->left=solve(nums,start,maxindex);
            root->right=solve(nums,maxindex+1,end);
        
            
return root;
        
}
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums,0,nums.size());

    }
};