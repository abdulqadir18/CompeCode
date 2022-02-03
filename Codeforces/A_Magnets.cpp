#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<string>s(n);
for(ll i=0; i<n; i++)
{
  cin>>s[i];
}

string prev=s[0];
ll ans=1;
for(ll i=1; i<n; i++)
{
  if(s[i]!=prev)
  {
    prev=s[i];
    ans++;
  }
}
cout<<ans;


return 0;
}