#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector <int> a(7);
for(int i=0; i<7; i++)
{
  cin>>a[i];
}

while(true)
{
  for(int i=0; i<7; i++)
  {
    n-=a[i];
    if(n<=0)
    {
      cout<<i+1;
      return 0;
    }
  }
}

return 0;
}