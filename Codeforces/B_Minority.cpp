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
  cin>>s;
  ll x=count(s.begin(),s.end(),'0');
  ll y=count(s.begin(),s.end(),'1');
  if(x==y)
  {
    cout<<x-1<<"\n";
  }
  else
  {
    cout<<min(x,y)<<"\n";
  }
}
return 0;
}