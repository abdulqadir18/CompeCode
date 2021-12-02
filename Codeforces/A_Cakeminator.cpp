#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int r,c;
cin>>r>>c;
vector<vector<char>>a(r*c);
for(int i=0; i<r; i++)
{
  for(int j=0; j<c; j++)
  {
    char x;
    cin>>x;
    a[i].push_back(x);
  }
}

int cnt=0;
int common=0;

for(int i=0; i<r; i++)
{
  int flag=0;
  for(int j=0; j<c; j++)
  {
    if(a[i][j]=='S')
    {
      flag=1;
    }
  }

  if(flag==0)
  {
    cnt+=c;
    common++;
  }
}

for(int i=0; i<c; i++)
{
  int flag=0;
  for(int j=0; j<r; j++)
  {
    if(a[j][i]=='S')
    {
      flag=1;
    }
  }

  if(flag==0)
  {
    cnt=cnt+r-common;
  }
}

cout<<cnt;
return 0;
}