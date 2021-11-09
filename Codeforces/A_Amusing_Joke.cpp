#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string a,b,s;
cin>>a>>b>>s;

a=a+b;

sort(a.begin(),a.end());
sort(s.begin(),s.end());

if(s.size()!=a.size())
{
  cout<<"NO";
  return 0;
}
int n=a.size();
for(int i=0; i<n; i++)
{
  if(s[i]!=a[i])
  {
    cout<<"NO";
    return 0;
  }
}

cout<<"YES";
return 0;
}