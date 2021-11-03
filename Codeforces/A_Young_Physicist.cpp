#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
vector <int> x(n),y(n),z(n);
for(int i=0; i<n; i++)
{
  cin>>x[i]>>y[i]>>z[i];
}

int sumX=0,sumY=0,sumZ=0;
for(int i=0; i<n; i++)
{
  sumX+=x[i];
  sumY+=y[i];
  sumZ+=z[i];
}

if(sumX==0 && sumY==0 && sumZ==0)
{
  cout<<"YES\n";
}
else
{
  cout<<"NO\n";
}

return 0;
}