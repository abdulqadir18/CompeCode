#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,m;
cin>>n>>m;
vector<vector<char>>a;
for(int i=0; i<n; i++)
{
  vector<char>temp;
  for(int j=0; j<m; j++)
  {
    char x;
    cin>>x;
    temp.push_back(x);
  }
  a.push_back(temp);
}

int cnt=0;
for(int i=0; i<n; i++)
{
  for(int j=0; j<m; j++)
  {
    if(a[i][j]=='W')
    {
      if((j-1>=0 && a[i][j-1]=='P')||(i-1>=0 && a[i-1][j]=='P')||(j+1<=m-1 && a[i][j+1]=='P')||(i+1<=n-1 && a[i+1][j]=='P')) cnt++;
    }
  }
}
cout<<cnt;

return 0;
}