#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
vector <int> a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

int cnt=0;
for(int i=1; i<n; i++)
{
  int flag=0;
  for(int j=0; j<i; j++)
  {
    if(a[0]>a[i])
    {
      if(a[j]<=a[i])
      {
        flag=1;
      }
    }

    else if(a[0]<a[i])
    {
      if(a[j]>=a[i])
      {
        flag=1;
      }
    }

    else
    {
      flag=1;
    }
  }

  if(flag==0)
  {
    cnt++;
  }
}

cout<<cnt;
return 0;
}