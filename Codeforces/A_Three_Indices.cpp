#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  vector<int>a(n);
  map<int,int>m;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    m[a[i]]=i+1;
  }

  stack<int>ns,ps;
  vector<int>na(n),pa(n);
  for(int i=0; i<n; i++)
  {
    while(!ps.empty() && ps.top()>=a[i]) ps.pop();
    if(ps.empty()) pa[i]=-1;
    else pa[i]=ps.top();
    ps.push(a[i]);
  }
  for(int i=n-1; i>=0; i--)
  {
    while(!ns.empty() && ns.top()>=a[i]) ns.pop();
    if(ns.empty()) na[i]=-1;
    else na[i]=ns.top();
    ns.push(a[i]);
  }

  int flag=1;
  for(int i=0; i<n; i++)
  {
    if(na[i]!=-1 && pa[i]!=-1)
    {
      cout<<"YES\n"<<m[pa[i]]<<" "<<i+1<<" "<<m[na[i]]<<"\n";
      flag=0;
      break;
    }
  }

  if(flag) cout<<"NO\n";
}

return 0;
}