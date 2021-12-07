#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

string s;
string a;
cin>>s>>a;
string r=string(s.rbegin(),s.rend());

if(r==a)
{
  cout<<"YES\n";
}
else
{
  cout<<"NO\n";
}

return 0;
}