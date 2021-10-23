#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
int n=s.size();

if(s[n-2]=='e' && s[n-1]=='r')
{
  cout<<"er";
}
else
{
  cout<<"ist";
}

return 0;
}