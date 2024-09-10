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
      void levelOrder(Node* root,int &count) {
       queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            while(size--){
      Node*curr=q.front();
                q.pop();
            
                for(auto itr:curr->children){
                    q.push(itr);
            }
          }
   count++;
        }
    }
    int maxDepth(Node* root) {
        if(root==NULL){
      return 0;
}
        int count=0;
        levelOrder(root,count);
        return count;
    }
};