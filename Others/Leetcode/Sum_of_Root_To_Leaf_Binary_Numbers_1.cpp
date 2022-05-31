class Solution {
public:
    void path(TreeNode *root, int cur, int &ans)
    {
        if(!root) return;
        cur=(cur*2)+root->val;
        if(!root->left && !root->right) ans+=cur;
        path(root->left, cur, ans);
        path(root->right, cur, ans);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        int cur=0;
        path(root, cur, ans);
        return ans;
    }
};