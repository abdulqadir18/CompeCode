#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int k;
cin>>k;
string s;
cin>>s;
sort(s.begin(),s.end());

char current=s[0];
int cnt=0;
string ans;

for(int i=0; i<s.size(); i++)
{
  if(s[i]!=current)
  {
    if(cnt%k==0)
    {
      int x=cnt/k;
      
      while(x--)
      {
        ans=ans+current;
      }
      current=s[i];
      cnt=1;
    }
    else
    {
      cout<<-1;
      return 0;
    }
  }
  else
  {
    cnt++;
  }
}

if(cnt%k==0)
{
  int x=cnt/k;
  while(x--)
  {
    ans=ans+current;
  }
}
else
{
  cout<<-1;
  return 0;
}

while(k--)
{
  cout<<ans;
}

return 0;
}