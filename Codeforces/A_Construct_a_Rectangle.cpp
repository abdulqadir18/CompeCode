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
  ll a,b,c;
  cin>>a>>b>>c;
  if((a==b && c%2==0)||(b==c && a%2==0)||(c==a && b%2==0))
  {
    cout<<"YES\n";
  }
  else if(a+b==c || b+c==a || c+a==b)
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