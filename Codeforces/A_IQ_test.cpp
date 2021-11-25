#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector <int> a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

vector <int> even,odd;
for(int i=0; i<n; i++)
{
  if(a[i]%2==0)
  {
    even.push_back(i+1);
  }
  else
  {
    odd.push_back(i+1);
  }
}

if(even.size()==1)
{
  cout<<even[0];
}
else
{
  cout<<odd[0];
}

return 0;
}