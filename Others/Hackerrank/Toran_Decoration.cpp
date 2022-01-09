#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

string s1,s2;
cin>>s1>>s2;
ll l1=s1.size();
ll l2=s2.size();
ll flag=0;
for(ll i=0; i<l1-l2+1; i++)
{
  string cmp=s1.substr(i,l2);
  if(cmp==s2)
  {
    cout<<i+1<<" ";
    flag=1;
  }
}

if(flag==0)
{
  cout<<-1;
}

return 0;
}