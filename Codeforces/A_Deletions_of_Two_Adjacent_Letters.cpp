#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll t;
cin>>t;
while(t--)
{
  string s;
  char c;
  cin>>s>>c;
  ll flag=1;
  for(ll i=0; i<s.size(); i++)
  {
    if(s[i]==c && i%2==0)
    {
      flag=0;
      cout<<"YES\n";
      break;
    }
  }
  if(flag) cout<<"NO\n";
}

return 0;
}