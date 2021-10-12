#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long t;
cin>>t;
while(t--)
{
  long n;
  cin>>n;
  string s;
  cin>>s;
  long l=s.size();
  long cnt=0;
  for(int i=0; i<l; i++)
  {
    for(int j=i+1; j<l; j++)
    {
      if(abs(i-j)==abs(s[i]-s[j]))
        cnt++;
    }
  }

  cout<<cnt<<"\n";

}

return 0;
}


//Method 2
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

// long t;
// cin>>t;
// while(t--)
// {
//   long n;
//   cin>>n;
//   string s;
//   cin>>s;
//   long l=s.size();
//   long cnt=0;
//   long i=0,j=0;
//   while(i<l)
//   {
//     j++;
//     if(abs(i-j)==abs(s[i]-s[j]))
//       cnt++;
//     if(j>l-1)
//     {
//       i++;
//       j=i;
//     }
//   }

//   cout<<cnt<<"\n";
// }
// return 0;
// }