class Solution {
public:
    void paths(TreeNode *root, string curPath, vector<string>&ans)
    {
        if(!root) return;
        curPath+=to_string(root->val);
        if(!root->left && !root->right) ans.push_back(curPath);
        curPath+="->";
        paths(root->left, curPath, ans);
        paths(root->right, curPath, ans);
        // curPath.pop_back();
        // while(curPath.back()!='>') curPath.pop_back();
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string curPath;
        paths(root,curPath,ans);
        return ans;
    }
};