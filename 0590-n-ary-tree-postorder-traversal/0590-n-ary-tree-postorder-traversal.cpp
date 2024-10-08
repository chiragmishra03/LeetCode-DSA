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
    vector<int>ans;
   void postorderTraversalHelper(Node* node){
        if(!node)return;
       auto v = node->children;
      for(int i=0;i<v.size();i++){
          auto subNode = v[i];
          postorderTraversalHelper(subNode);
      }
        ans.push_back(node->val);  
    }
    
    
    vector<int> postorder(Node* root) { 
        if(!root)return ans;
        postorderTraversalHelper(root);
        return ans;
    }
};