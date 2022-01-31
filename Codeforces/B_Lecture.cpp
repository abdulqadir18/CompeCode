#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,m;
cin>>n>>m;
vector<string>a(m),b(m),s(n);
for(int i=0; i<m; i++)
{
  cin>>a[i]>>b[i];
}
for(int i=0; i<n; i++)
{
  cin>>s[i];
}

map<string,string>mp;
for(int i=0; i<m; i++)
{
  if(a[i].size()<=b[i].size())
  {
    mp[a[i]]=a[i];
  }
  else
  {
    mp[a[i]]=b[i];
  }
}

for(int i=0; i<n; i++)
{
  cout<<mp[s[i]]<<" ";
}

return 0;
}