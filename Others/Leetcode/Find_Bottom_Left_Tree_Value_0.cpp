class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        bool isFirst=true;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode *temp=q.front();
            q.pop();
            if(!temp)
            {
                if(q.empty()) return ans;
                q.push(NULL);
                isFirst=true;
            }
            else
            {
                if(isFirst)
                {
                    isFirst=false;
                    ans=temp->val;
                    cout<<temp->val<<" ";
                }
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }
};