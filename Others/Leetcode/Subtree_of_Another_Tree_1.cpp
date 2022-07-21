class Solution {
public:
    bool dfs(TreeNode *root1, TreeNode *root2)
    {
        if(!root1 && !root2) return true;
        if(!root1 || !root2) return false;
        if(root1->val!=root2->val) return false;
        return dfs(root1->left,root2->left)&&dfs(root1->right,root2->right);
    }
    
    void find(TreeNode* root, TreeNode* subRoot, bool &ans)
    {
        if(!root) return;
        if(root->val==subRoot->val && !ans) ans=dfs(root,subRoot);
        find(root->left,subRoot,ans);
        find(root->right,subRoot,ans);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans=false;
        find(root, subRoot, ans);
        return ans;
    }
};