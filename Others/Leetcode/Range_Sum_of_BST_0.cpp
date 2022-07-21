class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        int ans=0;
        if(root->val<=high && root->val>=low) ans+=root->val;
        return ans+rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
    }
};