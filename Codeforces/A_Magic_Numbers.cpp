#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
string s=to_string(n);
cout<<s;
ll l=s.size();

if(l==1)
{
  if(s!="1")
  {
    cout<<"NO";
  }
  else
  {
    cout<<"YES";
  }
}
else if(l==2)
{
  if(s!="11" && s!="14")
  {
    cout<<"NO";
  }
  else
  {
    cout<<"YES";
  }
}
else if(l==3)
{
  if(s!="111" && s!="114" && s!="141" && s!="144")
  {
    cout<<"NO";
  }
  else
  {
    cout<<"YES";
  }
}
else
{
  if(l%3==0)
  {
    for(ll i=0; i<l-2; i+=3)
    {
      string x;
      x=s[i]+s[i+1]+s[i+2];
      if(x!="111" && x!="114" && x!="141" && x!="144")
      {
       cout<<"NO";
       return 0;
      }
    }
  }

  else if(l%3==1)
  {
    for(ll i=0; i<l-3; i+=3)
    {
      string x;
      x=s[i]+s[i+1]+s[i+2];
      if(x!="111" && x!="114" && x!="141" && x!="144")
      {
       cout<<"NO";
       return 0;
      }
    }
    if(s[l-1]!='1' && s[l-1]!='4')
    {
      cout<<"NO";
      return 0;
    }
  }
  else
  {
    
  }
}

return 0;
}