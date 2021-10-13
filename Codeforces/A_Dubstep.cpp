#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
// s.erase(0,3);
// int n=s.size();
// s.erase(n-3,n-1);
if(s.size()<3)
  cout<<s;

else
{
  for(int i=0; i<s.size()-2; i++)
  {
    if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B' && s[i]==' ')
    {
      s.replace(i,4," ");
    }

    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
    {
      s.replace(i,3," ");
      i--;
    }
  }

  cout<<s;
}
return 0;
}