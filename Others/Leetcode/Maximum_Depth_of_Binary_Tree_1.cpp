class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans++;
        }
        return ans;
    }
};