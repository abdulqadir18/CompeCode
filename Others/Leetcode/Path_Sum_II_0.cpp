class Solution {
public:
    void path(TreeNode *root, int curSum, int targetSum, vector<int> &curPath, vector<vector<int>> &ans)
    {
        if(!root) return;
        curPath.push_back(root->val);
        curSum+=(root->val);
        if(!root->left && !root->right && curSum==targetSum) ans.push_back(curPath);
        path(root->left, curSum, targetSum, curPath, ans);
        path(root->right, curSum, targetSum, curPath, ans);
        curPath.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>curPath;
        int curSum=0;
        path(root, curSum, targetSum, curPath, ans);
        return ans;
    }
};