#include <bits/stdc++.h>
using namespace std;

bool minu(long c)
{
  int cnt=0;
  while(c)
  {
    c&=(c-1);
    cnt++;
  }
  if(cnt==floor(log2(c))+1)
    return true;
  else
    return false;
}

long onesComplement(long n)
{
  
   long number_of_bits = floor(log2(n))+1;
 
   return ((1 << number_of_bits) - 1) ^ n;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long t;
cin>>t;
while(t--)
{
  long c;
  cin>>c;

  if(minu(c))
    cout<<1<<"\n"<<c<<"\n";
  else
    cout<<2<<"\n"<<~(c)<<" "<<~(c&0)<<"\n";
}

return 0;
}