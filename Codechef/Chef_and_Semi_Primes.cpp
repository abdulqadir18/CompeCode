#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

vector <int> s={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
vector <int> a;
for(int i=0; i<s.size(); i++)
{
  int flag=0;
  for(int j=0; j<s.size() && flag==0; j++)
  {
    if(s[i]*s[j]>200)
    {
      flag=1;
    }
    else if(i!=j)
    {
      a.push_back(s[i]*s[j]);
    }
  }
}

int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;

  int ans=0;
  for(int x=0; x<a.size(); x++)
  {
    for(int y=0; y<a.size() && ans==0; y++)
    {
      if(a[x]+a[y]==n)
      {
        ans=1;
        break;
      }

    }
  }

  if(ans==0)
  {
    cout<<"NO\n";
  }
  else
  {
    cout<<"YES\n";
  }
}

return 0;
}