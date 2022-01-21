#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,h;
cin>>n>>h;
vector<int>a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

int ans=0;
for(int i=0; i<n; i++)
{
  if(a[i]>h)
  {
    ans+=2;
  }
  else
  {
    ans++;
  }
}
cout<<ans;

return 0;
}