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
    string s;
    cin>>s;
    map<char,ll>m;
    for(ll i=0; i<s.size(); i++) m[s[i]]++;

    ll pre=0;
    for(ll i=0; i<s.size(); i++)
    {
      m[s[i]]--;
      if(!m[s[i]])
      {
        pre=i;
        break;
      } 
    }
    string ans=s.substr(pre,s.size()-pre);
    cout<<ans<<"\n";
  }
  return 0;
}