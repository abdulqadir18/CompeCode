#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector <ll> x1(n),x2(n),p1(n),p2(n);
for(ll i=0; i<n; i++)
{
  cin>>x1[i]>>p1[i]>>x2[i]>>p2[i];
}

for(ll i=0; i<n; i++)
{
  ll n1=p1[i]+floor(log10(x1[i])+1);
  ll n2=p2[i]+floor(log10l(x2[i])+1);
  
  if(n1>n2)
  {
    cout<<">\n";
  }
  else if(n1<n2)
  {
    cout<<"<\n";
  }
  else
  {
    ll z1=x1[i]/pow(10,floor(log10(x1[i])+1)-1);
    ll z2=x2[i]/pow(10,floor(log10(x2[i])+1)-1);
    if(z1>z2)
    {
      cout<<">\n";
    }
    else if(z1<z2)
    {
      cout<<"<\n";
    }
    else
    {
      cout<<"=\n";
    }
  }
}

return 0;
}