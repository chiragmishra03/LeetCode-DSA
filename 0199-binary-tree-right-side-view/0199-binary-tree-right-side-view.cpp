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
    vector<int> rightSideView(TreeNode* root) {
         queue<pair<TreeNode*,int>>q;
        if(!root)return{};
   pair<TreeNode*,int>p = make_pair(root,0);
   q.push(p);
   int level=0;
   vector<int>ans;
   while(!q.empty()){
       pair<TreeNode*,int>m = q.front();
       if(m.second==level){
           level++;
           ans.push_back(m.first->val);
       }
       q.pop();
       if(m.first->right)q.push(make_pair(m.first->right,level));
       if(m.first->left)q.push(make_pair(m.first->left,level));  
   }
   return ans;
    }
};