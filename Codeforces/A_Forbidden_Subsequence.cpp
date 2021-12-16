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
  string s,t;
  cin>>s>>t;

  sort(s.begin(), s.end());

  if(t!="abc")
  {
    cout<<s<<"\n";
  }

  else
  {
    int a=0, b=0, c=0;
    string x,y,z,w;
    for(int i=0; i<s.size(); i++)
    {
      if(s[i]=='a')
      {
        a++;
        x+="a";
      }
      else if(s[i]=='b')
      {
        b++;
        y+="b";
      }
      else if(s[i]=='c')
      {
        c++;
        z+="c";
      }
      else
      {
        w+=s[i];
      }
    }

    if(a!=0 && b!=0 && c!=0)
    {
      cout<<x+z+y+w<<"\n";
    }
    else
    {
      cout<<s<<"\n";
    }
  }
}

return 0;
}