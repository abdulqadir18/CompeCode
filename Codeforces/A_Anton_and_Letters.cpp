#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
int n=s.size();
string a;
int m=0;
if(n<=2)
{
  cout<<0;
  return 0;
}
else
{
  int count=0;
  for(int i=1; i<=n-2; i=i+2)
  {
    int x= a.find(s[i]);
    if(true)
    {
      count++;
    }
    else
    {
      a[m++]=s[i];
    }
  }
  cout<<count;

}
return 0;
}