#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;

if(n>=0)
{
  cout<<n;
}
else
{
  string s,x,y;
  s=to_string(n);
  x=s[s.size()-1];
  y=s[s.size()-2];
  s.erase(s.end()-2,s.end());
  string p=s,q=s;
  p.append(x);
  q.append(y);
  ll a=stoll(p);
  ll b=stoll(q);
  ll ans=max(a,b);
  cout<<ans;
  
}

return 0;
}