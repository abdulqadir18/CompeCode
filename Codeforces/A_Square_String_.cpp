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
  string s;
  cin>>s;
  
  if(s.size()%2!=0)
  {
    cout<<"NO\n";
  }
  else
  {
    // string a,b;
    // for(int i=0; i<s.size()/2; i++)
    // {
    //   a+=s[i];
    // }
    // for(int i=s.size()/2; i<s.size(); i++)
    // {
    //   b+=s[i];
    // }
    // cout<<((a==b)?"YES\n":"NO\n");
    int flag=0;
    for(int i=0; i<s.size()/2; i++)
    {
      if(s[i]!=s[i+s.size()/2])
      {
        flag=1;
        break;
      }
    }
    cout<<((flag==0)?"YES\n":"NO\n");
  }
}

return 0;
}