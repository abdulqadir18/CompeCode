class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        
        while(!q.empty())
        {
            ans=0;
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                ans+=(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        
        return ans;
    }
};