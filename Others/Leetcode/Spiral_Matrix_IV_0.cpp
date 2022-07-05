class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>a(m,vector<int>(n,0));
        int top=0, bottom=m-1, left=0, right=n-1;
        int d=1;
        while(top<=bottom && left<=right)
        {
            if(d==1)
            {
                for(int i=left; i<=right; i++)
                {
                    if(head) {a[top][i]=head->val; head=head->next;}
                    else a[top][i]=-1;
                }
                top++;
                d=2;
            }
            else if(d==2)
            {
                for(int i=top; i<=bottom; i++)
                {
                    if(head) {a[i][right]=head->val; head=head->next;}
                    else a[i][right]=-1;
                }
                right--;
                d=3;
            }
            else if(d==3)
            {
                for(int i=right; i>=left; i--)
                {
                    if(head) {a[bottom][i]=head->val; head=head->next;}
                    else a[bottom][i]=-1;
                }
                bottom--;
                d=4;
            }
            else if(d==4)
            {
                for(int i=bottom; i>=top; i--)
                {
                    if(head) {a[i][left]=head->val; head=head->next;}
                    else a[i][left]=-1;
                }
                left++;
                d=1;
            }
        }
        return a;
    }
};