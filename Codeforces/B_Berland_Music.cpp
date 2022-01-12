#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll t;
cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  vector<ll>a(n);
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
  }
  string s;
  cin>>s;

  vector<ll>like,dislike,ans(n);
  for(ll i=0; i<n; i++)
  {
    if(s[i]=='0')
    {
      dislike.push_back(a[i]);
    }
    else
    {
      like.push_back(a[i]);
    }
  }

  sort(like.begin(),like.end());
  sort(dislike.begin(),dislike.end());
  
  ll l=dislike.size()+1, d=1;
  for(ll i=0; i<like.size(); i++)
  {
    ans[like[i]]=l;
    l++;
  }
  for(ll i=0; i<dislike.size(); i++)
  {
    ans[dislike[i]]=d;
    d++;
  }

  for(ll i=0; i<n; i++)
  {
    cout<<ans[i]<<" ";
  }
  cout<<"\n";
}

return 0;
}