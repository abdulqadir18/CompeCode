#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

void backtrack(vector<int>nums, int ptr, vector<vector<int>>& ans)
{
    if(ptr>=nums.size()) {ans.push_back(nums); return;}
    
    for(int i=ptr; i<nums.size(); i++)
    {
        swap(nums[ptr], nums[i]); //swap
        backtrack(nums, ptr+1, ans);
        swap(nums[ptr], nums[i]); //reset
    }
}

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    vector<int>a;
    for(ll i=0; i<n; i++) cin>>a[i];
    vector<vector<int>> ans;
    backtrack(a,0,ans);
    sort(ans.begin(),ans.end());

    int flag=0;
    for(ll i=0; i<ans.size(); i++)
    {
      flag=0;
      for(ll j=0; j<a.size(); j++)
      {
        if(a[j]==ans[i][j]) flag=-1;
      }
      if(flag!=-1){flag=i; break;}
    }
    
    if(flag==-1) cout<<-1<<"\n";
    else
    {
      for(int i=0; i<a.size(); i++)
      {
        cout<<ans[flag][i]<<" ";
      }
      cout<<"\n";
    }
  }
  return 0;
}