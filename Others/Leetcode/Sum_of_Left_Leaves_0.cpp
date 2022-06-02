class Solution {
public:
    void getSum(TreeNode *root, int &sum, bool side)
    {
        if(!root) return;
        if(side && !root->left && !root->right) sum+=root->val;
        getSum(root->left, sum, true);
        getSum(root->right, sum, false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        bool side=false;
        int sum=0;
        getSum(root, sum, side);
        return sum;
    }
};