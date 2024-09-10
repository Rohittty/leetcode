/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
      void levelOrder(Node* root,vector<vector<int>>& ans) {
       queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>os;
            int size=q.size();
            while(size--){
      Node*curr=q.front();
                q.pop();
            os.push_back(curr->val);
                for(auto itr:curr->children){
                    q.push(itr);
            }
          }
   ans.push_back(os);
        }
    }
    int maxDepth(Node* root) {
        if(root==NULL){
      return 0;
}
        vector<vector<int>>ans;
        levelOrder(root,ans);
        return ans.size();
    }
};