#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int t;
cin>>t;
while(t--)
{
  int n,k;
  cin>>n>>k;
  int canbe;
  (n%2==0)?canbe=n/2:canbe=(n+1)/2;

  
  if(canbe>=k)
  {
    for(int i=1; i<=n; i++)
    {
      for(int j=1; j<=n; j++)
      {
        if(i==j && k!=0 && i%2!=0)
        {
          k--;
          cout<<"R";
        }
        else
        {
          cout<<".";
        }
      }
      cout<<"\n";
    }
  }

  else
  {
    cout<<-1<<"\n";
  }
}

return 0;
}