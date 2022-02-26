#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;

vector<pair<ll,ll>>l(n);
for(ll i=0; i<n; i++) cin>>l[i].first>>l[i].second;

ll maxP=0, maxQ=0;
for(ll i=0; i<n; i++)
{
  if(l[i].first!=l[i].second)
  {
    maxP=max(maxP,l[i].first);
    maxQ=max(maxQ,l[i].second);
  }
}

if(maxP && maxQ) cout<<"Happy Alex";
else cout<<"Poor Alex";


return 0;
}