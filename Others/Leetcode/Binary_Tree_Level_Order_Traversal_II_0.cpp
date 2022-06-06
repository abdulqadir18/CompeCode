class Solution {
public:
    vector<vector<int>>ans;
    
    void dfs(TreeNode *root, int level)
    {
        if(!root) return;
        if(level==ans.size()) ans.push_back(vector<int>());
        ans[level].push_back(root->val);
        dfs(root->left,level+1);
        dfs(root->right,level+1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        dfs(root,0);
        return vector<vector<int>> (ans.rbegin(),ans.rend());
    }
};