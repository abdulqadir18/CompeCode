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
  cin>>s;
  if(n==1)
  {
    cout<<"YES\n";
  }
  else if(n==2 && (s=="10" ||s=="01"))
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }
}

return 0;
}