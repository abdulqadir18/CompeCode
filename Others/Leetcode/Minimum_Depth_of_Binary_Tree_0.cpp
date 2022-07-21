class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        int minL=1e8,minR=1e8;
        if(root->left) minL=minDepth(root->left);
        if(root->right) minR=minDepth(root->right);
        return 1+min(minL,minR);
    }
};