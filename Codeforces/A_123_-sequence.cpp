#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<ll>a(n);
for(ll i=0; i<n; i++)
{
  cin>>a[i];
}

ll cnt1=0, cnt2=0, cnt3=0;
for(ll i=0; i<n; i++)
{
  if(a[i]==1) cnt1++;
  else if(a[i]==2) cnt2++;
  else cnt3++;
}

cout<<n-max(cnt3,max(cnt1,cnt2));

return 0;
}