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
  int n,m,k,i;
  cin>>n>>m>>k;
  vector <int> a(n);
  for(i=0; i<n; i++)
  {
    cin>>a[i];
  }
  
  int c=0;
  for(i=0; i<n; i++)
  {
    if(a[i]==0)
    {
      break;
    }
    c++;
  }

  if(c==n)
    cout<<100<<"\n";
  else if(c>=m)
    cout<<k<<"\n";
  else
    cout<<0<<"\n";
}

return 0;
}