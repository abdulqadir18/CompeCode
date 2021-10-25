#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
  string s;
  cin>>s;

  int min=INT_MAX;
  int dlt=-1;
  string a;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]<min)
    {
      min=s[i];
      a=s[i];
      dlt=i;
    }
  }

  s.erase(s.begin()+dlt);

  cout<<a<<" "<<s<<"\n";
  }

return 0;
}