#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<string>name(n),mem(n);
for(ll i=0; i<n; i++)
{
  cin>>name[i]>>mem[i];
}

vector<string>caps,wc,man,rat;
for(ll i=0; i<n; i++)
{
  if(mem[i]=="captain") caps.push_back(name[i]);
  else if(mem[i]=="rat") rat.push_back(name[i]);
  else if(mem[i]=="man") man.push_back(name[i]);
  else wc.push_back(name[i]);
}
for(ll i=0; i<rat.size(); i++)cout<<rat[i]<<"\n";
for(ll i=0; i<wc.size(); i++)cout<<wc[i]<<"\n";
for(ll i=0; i<man.size(); i++)cout<<man[i]<<"\n";
for(ll i=0; i<caps.size(); i++)cout<<caps[i]<<"\n";

return 0;
}