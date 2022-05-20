class Solution {
public:
    int dfsHeight(TreeNode *root)
    {
        if(root==NULL) return 0;
        int lh=dfsHeight(root->left);
        int rh=dfsHeight(root->right);
        return max(lh,rh)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int lh=dfsHeight(root->left);
        int rh=dfsHeight(root->right);
        if(abs(lh-rh)>1) return false;
        
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        if(left && right) return true;
        return false;
    }
};