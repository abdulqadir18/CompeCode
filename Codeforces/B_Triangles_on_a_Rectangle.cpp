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
  ll w,h;
  cin>>w>>h;
  ll n1;
  cin>>n1;
  vector <ll> a1(n1);
  for(ll i=0; i<n1; i++)
  {
    cin>>a1[i];
  }
  ll n2;
  cin>>n2;
  vector <ll> a2(n2);
  for(ll i=0; i<n2; i++)
  {
    cin>>a2[i];
  }
  ll n3;
  cin>>n3;
  vector <ll> a3(n3);
  for(ll i=0; i<n3; i++)
  {
    cin>>a3[i];
  }
  ll n4;
  cin>>n4;
  vector <ll> a4(n4);
  for(ll i=0; i<n4; i++)
  {
    cin>>a4[i];
  }

  ll a=a1[n1-1]-a1[0];
  ll b=a2[n2-1]-a2[0];
  ll c=a3[n3-1]-a3[0];
  ll d=a4[n4-1]-a4[0];

  cout<<max(max(a*h,b*h),max(c*w,d*w))<<"\n";
}

return 0;
}