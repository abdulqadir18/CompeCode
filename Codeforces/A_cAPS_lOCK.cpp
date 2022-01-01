#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

string s;
cin>>s;

int flag=0;
for(int i=1; i<s.size(); i++)
{
  if(!(s[i]>='A'&&s[i]<='Z'))
  {
    flag=1;
    break;
  }
}

if(flag==1)
{
  cout<<s<<"\n";
}
else
{
  if(s[0]>='a'&&s[0]<='z')
  {
    s[0]=toupper(s[0]);
    transform(s.begin()+1,s.end(),s.begin()+1, ::tolower);
  }
  else
  {
    transform(s.begin(),s.end(),s.begin(), ::tolower);
  }

  
  cout<<s<<"\n";

}

return 0;
}