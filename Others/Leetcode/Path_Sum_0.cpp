class Solution {
public:
    void pathSum(TreeNode *root, int curSum, int targetSum, bool &isFound)
    {
        if(!root) return;
        curSum+=(root->val);
        if(!root->left && !root->right && curSum==targetSum) isFound=true;
        pathSum(root->left, curSum, targetSum, isFound);
        pathSum(root->right, curSum, targetSum, isFound);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool isFound=false;
        int curSum=0;
        pathSum(root, curSum, targetSum, isFound);
        return isFound;
    }
};