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
  ll n;
  cin>>n;
  string s;
  for(ll i=97; i<=122 && n--; i++)
  {
    s+=i;
    if(i==122)
    {
      i=96;
    }
  }
  cout<<s<<"\n";
}

return 0;
}