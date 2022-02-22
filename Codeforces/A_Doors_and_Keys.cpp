#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll t;
cin>>t;
while(t--)
{
  string s;
  cin>>s;
  int setr=0, setg=0, setb=0;
  int done=1;
  for(ll i=0; i<s.size(); i++)
  {
    if(s[i]=='r')setr=1;
    else if(s[i]=='b')setb=1;
    else if(s[i]=='g')setg=1;

    if(s[i]=='R' && setr==0)
    {
      cout<<"NO\n";
      done=0;
      break;
    }
    else if(s[i]=='B' && setb==0)
    {
      cout<<"NO\n";
      done=0;
      break;
    }
    else if(s[i]=='G' && setg==0)
    {
      cout<<"NO\n";
      done=0;
      break;
    }
  }

  if(done) cout<<"YES\n";
}

return 0;
}