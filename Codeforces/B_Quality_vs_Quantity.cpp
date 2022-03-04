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
  vector<ll>a(n);
  for(ll i=0; i<n; i++) cin>>a[i];
  sort(a.begin(),a.end());

  ll i=2, j=n-2; 
  ll flag=1;
  ll cb=0, cr=0, sb=a[0]+a[1], sr=a[n-1];
  if(sr>sb)
  {
    flag=0;
  }
  while(i<j)
  { 
    sr+=a[j];
    j--;
    sb+=a[i];
    i++;
    // cout<<sr<<" "<<sb<<" ";
    if(sr>sb)
    {
      flag=0;
      break;
    }
    
  }
  if(flag) cout<<"NO\n";
  else cout<<"YES\n";
  
}

return 0;
}