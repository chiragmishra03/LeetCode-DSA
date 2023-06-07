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
    void traverse(TreeNode* root,vector<string>&ans,string s){
        if(!root)return;
        if(!root->left && !root->right)
        {
            int d = root->val;
            string m = to_string(d);
            s+=m;
            ans.push_back(s);
            s.pop_back();
            return;
        }
        int d = root->val;
        string m = to_string(d);
        s+=m;
        s+="->";
        traverse(root->left,ans,s);
        traverse(root->right,ans,s);
        s.pop_back();
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s;
        traverse(root,ans,s);
        return ans;
        
    }
};