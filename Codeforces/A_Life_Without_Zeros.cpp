#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll a,b;
cin>>a>>b;
ll c=a+b;

vector<ll>av,bv,cv;
while(a!=0)
{
  if(a%10!=0)av.push_back(a%10);
  a/=10;
}
while(b!=0)
{
  if(b%10!=0)bv.push_back(b%10);
  b/=10;
}
while(c!=0)
{
  if(c%10!=0)cv.push_back(c%10);
  c/=10;
}

for(ll i=av.size()-1; i>=0; i--)
{
  a=a*10+av[i];
}
for(ll i=bv.size()-1; i>=0; i--)
{
  b=b*10+bv[i];
}
for(ll i=cv.size()-1; i>=0; i--)
{
  c=c*10+cv[i];
}

// cout<<a<<" "<<b<<" "<<c;
if(a+b==c)cout<<"YES";
else cout<<"NO";
return 0;
}