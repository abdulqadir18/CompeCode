#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

// ll n;
// cin>>n;
// ll x=n;
// ll r=0;
// ll cnt=0;
// while(x%10==0)
// {
//   cnt++;
//   x/=10;
// }
// while(x)
// {
//   r=r*10 +x%10;
//   x/=10;
// }
// cout<<n;
// while(cnt--) cout<<0;
// cout<<r;
string s;
cin>>s;
string r=string(s.rbegin(), s.rend());
cout<<s<<r;
return 0;
}