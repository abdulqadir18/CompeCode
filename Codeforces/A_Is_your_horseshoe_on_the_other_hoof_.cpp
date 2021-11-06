#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

vector <ll> s(4);
for(ll i=0; i<4; i++)
{
  cin>>s[i];
}

vector <ll> a;
a.push_back(0);
for(ll i=0; i<4; i++)
{
  int flag=0;
  for(ll j=0; j<a.size(); j++)
  {
    if(a[j]==s[i])
    {
      flag=1;
    }
  }

  if(flag==0)
  {
    a.push_back(s[i]);
  }
}

cout<<4-(a.size()-1);

return 0;
}