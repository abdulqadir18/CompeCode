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
  int n,a,b;
  cin>>n>>a>>b;

  for(int i=97, j=0; j<n ; i++, j++)
  {
    cout<<(char)i;
    if(i==97+b-1)
    {
      i=96;
    }
  }
  cout<<"\n";

}

return 0;
}