#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

// long long int n,m;
// cin>>n>>m;
// string a= to_string(n);
// string b= to_string(m);
string a,b;
cin>>a>>b;
for(int i=0; i<a.size(); i++)
{
  if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0'))
  {
    cout<<1;
  }
  else
  {
    cout<<0;
  }
}
return 0;
}