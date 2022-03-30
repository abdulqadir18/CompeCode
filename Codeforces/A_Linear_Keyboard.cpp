#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    string q,s;
    cin>>q>>s;
    ll ans=0;
    map<char,ll>m;
    for(int i=0; i<q.size(); i++)
    {
      m[q[i]]=i+1;
    }

    for(int i=0; i<s.size()-1; i++)
    {
      ans+=abs(m[s[i]]-m[s[i+1]]);
    }
    cout<<ans<<"\n";
    
  }
  return 0;
}