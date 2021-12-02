#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector<int> x(n),y(n);
for(int i=0; i<n; i++)
{
  cin>>x[i]>>y[i];
}

int cnt=0;
for(int i=0; i<n; i++)
{
  int a=0,b=0,c=0,d=0,tag=0;
  for(int j=0; j<n && tag==0; j++)
  {
    if(x[i]>x[j] && y[i]==y[j])
    {
      a=1;
    }
    else if(x[i]<x[j] && y[i]==y[j])
    {
      b=1;
    }
    else if(x[i]==x[j] && y[i]>y[j])
    {
      c=1;
    }
    else if(x[i]==x[j] && y[i]<y[j])
    {
      d=1;
    }

    if(a==1 && b==1 && d==1 && c==1)
    {
      tag=1;
      cnt++;
    }
  }
}

cout<<cnt;

return 0;
}