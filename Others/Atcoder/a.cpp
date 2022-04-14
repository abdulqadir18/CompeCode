#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  vector<int>a(7);
  int k=7;
  for(int i=0; i<7; i++) cin>>a[i];

  int l=a[0];
  for(int i=0; i<7; i++)
  {
    if(a[i]>l) l=a[i];
  }  
  cout<<l<<"\n";

  vector<int>ash(l+1);
  for(int i=0; i<7; i++)
  {
    ash[a[i]]=1;
    cout<<a[i]<<" ";
    if(a[i]<=k && ash[k-a[i]]==1) cout<<k-a[i]<<" "<<a[i];
    cout<<"\n";
  }
 return 0;
}