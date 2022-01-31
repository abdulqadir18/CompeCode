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
vector<set<ll>>s;
set<ll>temp;
for(ll i=0; i<n; i++)
{
  cin>>a[i];
  if(a[i]==-1)
  {
    temp.insert(i+1);
  }
}

ll x=temp.size();
ll i=1;
while(x!=n)
{
  s.push_back(temp);
  temp.clear();
  for(ll j=0; j<a.size(); j++)
  {
    auto it=s.back().find(a[j]);
    if(it!=s.back().end())
    {
      temp.insert(j+1);
    }
  }
  x+=temp.size();
  i++;
}
cout<<s.size()+1<<"\n";
return 0;
}