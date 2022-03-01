#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n, l;
cin>>n>>l;
vector<ll>a(n);
for(ll i=0; i<n; i++) cin>>a[i];
double ans=0;
ll mx=0;

sort(a.begin(), a.end());
for(ll i=1; i<n; i++)
{
  mx=max(mx,a[i]-a[i-1]);
}
ans=max((double)mx/2, max((double)a[0]-0, (double)l-a[n-1]));
printf("%.10lf\n",ans);


return 0;
}