class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorder(root,ans);
        return ans;
    }
    void preorder(TreeNode* root, vector<int>&v)
    {
        if(!root) return;
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
};