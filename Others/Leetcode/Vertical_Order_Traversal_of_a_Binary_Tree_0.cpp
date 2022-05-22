class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push(make_pair(root,make_pair(0,0)));
        
        map<int,map<int,multiset<int>>>m;
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            TreeNode *temp=p.first;
            int x=p.second.first;
            int y=p.second.second;
            m[x][y].insert(temp->val);
            if(temp->left) q.push(make_pair(temp->left,make_pair(x-1,y+1)));
            if(temp->right) q.push(make_pair(temp->right,make_pair(x+1,y+1)));

        }
        
        vector<vector<int>>ans;
        for(auto p: m)
        {
            vector<int>col;
            for(auto r: p.second)
            {
                col.insert(col.end(), r.second.begin(), r.second.end());
            }
            ans.push_back(col);
        }
        
        return ans;
    }
};