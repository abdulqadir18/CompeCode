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
  int n;
  cin>>n;
  string s;
  cin>>s;
  int r=0,l=0,ans=0;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]==')')
    {
      r++;
    }
    else
    {
      l++;
    }

    if(r>l)
    {
      ans++;
      r=0,l=0;
    }
  }
  cout<<ans<<"\n";
}

return 0;
}