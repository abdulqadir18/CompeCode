#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,m;
cin>>n>>m;

for(int r=0; r<n; r++)
{
  for(int c=0; c<m; c++)
  {
    if(r%2==0)
    {
      cout<<"#";
    }
    else if((r-1)%4==0)
    {
      if(c==m-1)
      {
        cout<<"#";
      }
      else
      {
        cout<<".";
      }
    }
    else
    {
      if(c==0)
      {
        cout<<"#";
      }
      else
      {
        cout<<".";
      }
    }
    
  }
  cout<<"\n";
}

return 0;
}