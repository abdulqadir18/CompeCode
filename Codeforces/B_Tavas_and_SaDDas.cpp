#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
string s;
s=to_string(n);
ll l=s.size();
ll m=l;

ll low=1,high=pow(2,l),add_on;
while(m--)
{
  ll i=l-m-1;
  ll current=(high-low+1)/2;
  if(m==0)
  {
    if(s[i]=='4')
    {
      add_on=low;
    }
    else
    {
      add_on=high;
    }
  }
  else
  {
    if(s[i]=='4')
    {
      high-=current;
    }
    else
    {
      low+=current;
    }
  }

}

ll ans= (2*(pow(2,l-1)-1)) + add_on;
cout<<ans;
return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// typedef long long ll;

// ll n;
// cin>>n;


// return 0;
// }