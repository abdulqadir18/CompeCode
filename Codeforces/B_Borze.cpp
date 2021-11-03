#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
int n=s.size();

if(n>2)
{
  for(int i=0; i<n-1;i++)
  {
    if(s[i]=='-' && s[i+1]=='-')
    {
      cout<<2;
      i++;
    }
    else if(s[i]=='-' && s[i+1]=='.')
    {
      cout<<1;
      i++;
    }
    else
    {
      cout<<0;
    }
  }

  if(n>2 && s[n-1]=='.' && (!(s[n-2]=='-' && s[n-3]=='.')))
  {
    cout<<0;
  }

}

if(n==1)
{
  cout<<0;
}

if(n==2)
{
  if(s[0]=='-' && s[1]=='-')
  {
    cout<<2;
  }
  if(s[0]=='-' && s[1]=='.')
  {
    cout<<1;
  }
  if(s[0]=='.' && s[1]=='.')
  {
    cout<<0<<0;
  }
}
return 0;
}