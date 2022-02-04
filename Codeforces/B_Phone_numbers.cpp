#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
string s;
cin>>s;
if(n<=3)
{
  cout<<s;
  return 0;
}

string ans="";
if(n%2==0)
{
  for(int i=0; i<n-2; i+=2)
  {
    ans+=s[i];
    ans+=s[i+1];
    ans+='-';
  }
  ans+=s[n-2];
  ans+=s[n-1];
  cout<<ans;
}
else
{
    for(int i=0; i<n-3; i+=2)
    {
      ans+=s[i];
      ans+=s[i+1];
      ans+='-';
    }
    ans+=s[n-3];
    ans+=s[n-2];
    ans+=s[n-1];
    cout<<ans;
}

return 0;
}