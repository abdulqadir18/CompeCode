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
  int l = s.size();

  if(s[0]==s[l-1])
  {
    cout<<s<<"\n";
  }

  else
  {
    (s[0]=='a')?s[0]='b':s[0]='a';
    cout<<s<<"\n";
  }
}

return 0;
}