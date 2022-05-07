#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    ll r,a,b;
    cin>>r>>a>>b;
    double pi= 3.14159265358979323846;
    double area=0, ans=0;
    cout<<setprecision(6);
    area=pi*r*r;
    ans+=area;
    r*=a;
    area=pi*r*r;
    ans+=area;
    r/=b;
    while(r)
    {
      area=pi*r*r;
      ans+=area;
      r*=a;
      area=pi*r*r;
      ans+=area;
      r/=b;
    }
    // cout<<setprecision(7);
    // cout<<setprecision(5);
    
    cout<<ans<<"\n";
  }
  return 0;
}