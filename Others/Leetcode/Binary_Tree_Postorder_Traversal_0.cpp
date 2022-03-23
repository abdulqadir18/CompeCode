class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder(root,ans);
        return ans;
    }
    void postorder(TreeNode* root, vector<int>&v)
    {
        if(!root) return;
        postorder(root->left,v);
        postorder(root->right,v);
        v.push_back(root->val);
    }
};