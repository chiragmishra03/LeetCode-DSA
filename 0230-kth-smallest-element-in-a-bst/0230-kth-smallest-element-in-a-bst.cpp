class Solution {
public:
    
    int smallest(TreeNode* root,int &k){
        
        if(root->left){
            int val = smallest(root->left,k);
            if (k == 0) return val;
        }
        
        --k;
        if(k == 0) return root->val;
        
        if(root->right){
            int val = smallest(root->right,k);
            if (k == 0) return val;
        }
        
        return -1;
    }
    
    
    int kthSmallest(TreeNode* root, int k) {
        return smallest(root,k);
    }
};