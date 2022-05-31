class Solution {
public:
    void getParent(TreeNode *root, TreeNode *parent, map<TreeNode*,TreeNode*> &m)
    {
        if(!root) return;
        m[root]=parent;
        getParent(root->left,root,m);
        getParent(root->right,root,m);
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*>m;
        getParent(root,NULL,m);
        vector<int>ans;
        queue<TreeNode*>q;
        if(!target) return ans;
        q.push(target);
        set<TreeNode*>s;
        
        while(!q.empty() && k>=0)
        {
            int size=q.size();
            vector<int>level;
            for(int i=0; i<size; i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                s.insert(temp);
                level.push_back(temp->val);
                if(temp->left && s.find(temp->left)==s.end()) q.push(temp->left);
                if(temp->right && s.find(temp->right)==s.end()) q.push(temp->right);
                if(m[temp] && s.find(m[temp])==s.end()) q.push(m[temp]);
            }
            if(!k) ans=level;
            k--;
        }
        return ans;
        
    }
};