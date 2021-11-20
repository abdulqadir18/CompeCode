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

int sum=0;
for(int i=0; i<n; i++)
{
  sum+=a[i];
}

int ans=0;
for(int i=1; i<=5; i++)
{
  if((i+sum)%(n+1)!=1)
  {
    ans++;
  }
}

cout<<ans;

return 0;
}