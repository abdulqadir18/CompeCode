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
  int n;
  cin>>n;
  if(n==1)
  {
    cout<<1<<" "<<1<<"\n";
  }
  else
  {
    cout<<1<<" "<<1<<" ";
    int i=2, m=n-1;
    while(m--)
    {
      cout<<i<<" ";
      i+=2;
    }
    cout<<"\n";
  }
}

return 0;
}