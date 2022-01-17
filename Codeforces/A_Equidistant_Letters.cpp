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
  sort(s.begin(),s.end());
  int cnt=0,cur=s[0];
  string twice,once;
  for(int i=0; i<s.size(); i++)
  {
    if(cur!=s[i])
    {
      if(cnt==2)
      {
        twice+=s[i-1];
      }
      else
      {
        once+=s[i-1];
      }
      cur=s[i];
      cnt=1;
    }
    else
    {
      cnt++;
    }
  }
  (cnt==2)?twice+=s[s.size()-1]:once+=s[s.size()-1];
  cout<<twice<<twice<<once<<'\n';
}

return 0;
}