class Solution {
public:
    void path(TreeNode *root, string &cur, int &ans)
    {
        if(!root) return;
        cur+=to_string(root->val);
        if(!root->left && !root->right) ans+=stoi(cur,0,2);
        path(root->left, cur, ans);
        path(root->right, cur, ans);
        cur.pop_back();
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        string cur;
        path(root, cur, ans);
        return ans;
    }
};