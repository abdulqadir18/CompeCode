#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

string s;
cin>>s;
char current='0';
int cnt=0;
for(int i=0; i<s.size(); i++)
{
  if(s[i]!=current)
  {
    current=s[i];
    cnt=1;
  }
  else
  {
    cnt++;
  }

  if(cnt>=7)
  {
    cout<<"YES";
    return 0;
  }
}
cout<<"NO";

return 0;
}