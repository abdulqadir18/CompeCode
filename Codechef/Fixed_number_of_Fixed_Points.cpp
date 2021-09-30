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
  int n,k;
  cin>>n>>k;
  int i,cnt=0;
  int *a= new int(n);
  for(i=0; i<n; i++)
    a[i]=i;

  while(next_permutation(a,a+n))
  {
    int c=0;
    for(i=0; i<n; i++)
    {
      if(a[i]==i)
        c++;
    }
    if(c==k){
      cnt++;
      break;
    }
  }
  if(cnt!=0)
  {
    for(i=0; i<n; i++)
      cout<<a[i];
  }
  else  cout<<"-1n";

}

return 0;
}