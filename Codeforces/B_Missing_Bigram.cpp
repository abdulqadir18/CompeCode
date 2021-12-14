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
  vector <string> s(n-2);
  for(int i=0; i<n-2; i++)
  {
    cin>>s[i];
  }

  string ans=s[0];
  string a="a", b="b";
  for(int i=1; i<n-2; i++)
  {
    if(ans[ans.size()-1]+a==s[i])
    {
      ans+=a;
    }
    else if(ans[ans.size()-1]+b==s[i])
    {
      ans+=b;
    }
    else
    {
      ans+=s[i];
    }
  }

  if(ans.size()==n)
  {
    cout<<ans<<"\n";
  }
  else
  {
    cout<<ans+a<<"\n";
  }
}

return 0;
}