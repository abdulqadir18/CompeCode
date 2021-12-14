#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,m;
cin>>n>>m;
vector <int> a(m),b(m);
for(int i=0; i<m; i++)
{
  cin>>a[i];
  b[i]=a[i];
}

int minSum=0,maxSum=0;
while(n--)
{
  sort(a.begin(),a.end());
  int flag=0;
  for(int i=0; i<a.size() && flag==0; i++)
  {
    if(a[i]>0)
    {
      minSum+=a[i];
      a[i]--;
      flag=1;
    }
  }

  sort(b.rbegin(),b.rend());
  maxSum+=b[0];
  b[0]--;

}

cout<<maxSum<<" "<<minSum;

return 0;
}