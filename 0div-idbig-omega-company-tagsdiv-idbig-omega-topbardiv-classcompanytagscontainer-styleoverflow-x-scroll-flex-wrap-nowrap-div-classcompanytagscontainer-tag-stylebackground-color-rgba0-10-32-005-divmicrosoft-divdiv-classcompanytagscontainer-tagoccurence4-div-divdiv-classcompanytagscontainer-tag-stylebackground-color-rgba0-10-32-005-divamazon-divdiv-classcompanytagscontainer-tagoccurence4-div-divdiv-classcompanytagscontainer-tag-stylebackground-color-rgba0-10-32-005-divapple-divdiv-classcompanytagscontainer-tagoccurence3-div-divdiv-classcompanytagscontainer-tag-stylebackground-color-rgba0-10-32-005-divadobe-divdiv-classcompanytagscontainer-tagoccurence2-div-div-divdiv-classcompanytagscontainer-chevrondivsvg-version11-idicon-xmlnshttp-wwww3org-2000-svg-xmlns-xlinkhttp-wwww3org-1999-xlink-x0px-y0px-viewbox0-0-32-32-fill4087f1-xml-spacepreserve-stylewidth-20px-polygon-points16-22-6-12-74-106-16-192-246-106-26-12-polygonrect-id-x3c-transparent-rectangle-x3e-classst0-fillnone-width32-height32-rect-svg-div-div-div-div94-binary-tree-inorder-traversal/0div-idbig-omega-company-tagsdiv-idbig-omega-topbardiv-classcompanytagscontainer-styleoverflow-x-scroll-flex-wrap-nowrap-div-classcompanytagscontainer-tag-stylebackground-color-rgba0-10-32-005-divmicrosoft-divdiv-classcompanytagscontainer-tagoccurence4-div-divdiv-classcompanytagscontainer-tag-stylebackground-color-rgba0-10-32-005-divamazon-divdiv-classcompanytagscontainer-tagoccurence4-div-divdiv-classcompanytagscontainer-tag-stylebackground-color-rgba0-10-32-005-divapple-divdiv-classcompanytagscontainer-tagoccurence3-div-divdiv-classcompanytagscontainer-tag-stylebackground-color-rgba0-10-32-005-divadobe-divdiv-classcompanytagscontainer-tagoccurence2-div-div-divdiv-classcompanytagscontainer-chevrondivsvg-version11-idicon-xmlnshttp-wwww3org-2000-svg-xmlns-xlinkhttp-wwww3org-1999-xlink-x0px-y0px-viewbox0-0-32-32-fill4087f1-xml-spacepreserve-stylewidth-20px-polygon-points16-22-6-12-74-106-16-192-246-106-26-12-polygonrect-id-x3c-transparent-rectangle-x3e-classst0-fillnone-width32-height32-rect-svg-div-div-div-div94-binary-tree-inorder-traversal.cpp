class Solution {
public:
    vector<int> num;
    vector<int> inorderTraversal(TreeNode* root) {
        if (root==nullptr)
            return num;
        inorderTraversal(root->left);
        num.push_back(root->val);
        inorderTraversal(root->right); 
        return num;      
    }
};