#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
  string s;
  cin>>s;
  int a=0, b=0, c=0;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]=='A')
      a++;
    if(s[i]=='B')
      b++;
    if(s[i]=='C')
      c++;
  }
  if(b==a+c)
    cout<<"YES\n";
  else
    cout<<"NO\n";
}

return 0;
}