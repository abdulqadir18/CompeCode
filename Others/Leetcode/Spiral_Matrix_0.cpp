class Solution {
public:
    //problem with last elements
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int iMin=0, iMax=matrix.size()-1;
        int jMin=0, jMax=matrix[0].size()-1;
        int i=iMin, j=jMin;
        int k=(iMax+1)*(jMax+1);
        vector<int>ans;
        while(ans.size()!=k)
        {
            if(ans.size()==k-1)
            {
                ans.push_back(matrix[i][j]);
                cout<<matrix[i][j]<<" ";
            }
            else if(i==iMin && j==jMin)
            {
                while(j<jMax)
                {
                    ans.push_back(matrix[i][j]);
                    cout<<matrix[i][j]<<" ";
                    j++;
                }
            }
            
            else if(i==iMin && j==jMax)
            {
                while(i<iMax)
                {
                    ans.push_back(matrix[i][j]);
                    cout<<matrix[i][j]<<" ";
                    i++;
                }
            }
            
            else if(i==iMax && j==jMax)
            {
                while(j>jMin)
                {
                    ans.push_back(matrix[i][j]);
                    cout<<matrix[i][j]<<" ";
                    j--;
                }
            }
            
            else
            {
                while(i>iMin)
                {
                    ans.push_back(matrix[i][j]);
                    cout<<matrix[i][j]<<" ";
                    i--;
                }
                iMin++; iMax--;
                jMin++; jMax--;
                i=iMin; j=jMin;
            }
        }
        
        return ans;
    }
};