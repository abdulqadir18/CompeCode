class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
    }
    void inorder(TreeNode* root, vector<int>&v)
    {
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
};