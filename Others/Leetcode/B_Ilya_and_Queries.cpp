#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

string s;
cin>>s;
ll m;
cin>>m;
vector<pair<ll,ll>>a(m);
for(ll i=0; i<m; i++)
{
  cin>>a[i].first>>a[i].second;
}

// for(ll i=0; i<m; i++)
// {
//   ll cnt=0;
//   for(ll j=a[i].first; j<a[i].second; j++)
//   {
//     if(s[j]==s[j-1]) cnt++;
//   }
//   cout<<cnt<<"\n";
// }
vector<ll>cum(s.size());
int cnt=0;
for(ll i=0; i<s.size()-1; i++)
{
  if(s[i]==s[i+1]) cnt++;
  cum[i+1]=cnt;
}

for(ll i=0; i<m; i++)
{
  cout<<cum[a[i].second-1]-cum[a[i].first-1]<<"\n";
}

return 0;
}