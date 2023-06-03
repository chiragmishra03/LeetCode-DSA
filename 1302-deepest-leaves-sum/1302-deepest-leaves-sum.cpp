class Solution {
public:
    int h;
    int hei(TreeNode*root){
        if(root==NULL)return 0;
        return max(1+hei(root->left),1+hei(root->right));
    }
    int sum(TreeNode* root, int i){
        if(root==NULL)return 0;
        if(i==h){
            return root->val;
        }
        return sum(root->left,i+1) + sum(root->right,i+1);
    }
  
    int deepestLeavesSum(TreeNode* root) {
        h=hei(root);
        if(root==NULL)return 0;
        return sum(root,1);
    }
};