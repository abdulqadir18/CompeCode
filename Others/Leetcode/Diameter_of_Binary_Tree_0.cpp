class Solution {
public:
    int height(TreeNode *root, int &d)
    {
        if(!root) return 0;
        int lh=height(root->left,d);
        int rh=height(root->right,d);
        d=max(d,1+lh+rh);
        return 1+max(lh,rh);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        int h=height(root,d);
        return d-1;
    }
};