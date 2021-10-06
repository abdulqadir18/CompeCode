//Method 1
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
//   long max_cnt=0;
//   for(int i=0; i<floor(log2(n))+1; i++)
//   {
//     long cnt=0;
//     int m=n;
//     while(m--)
//     {
//       if((m&(1<<i))!=0)
//         cnt++;
//     }

//     if(max_cnt<cnt)
//       max_cnt=cnt;
//   }

//   cout<<n-max_cnt<<"\n";
// }

// return 0;
// }


//Methos 2
// #include <bits/stdc++.h>
// using namespace std;

// bool isPower2(int m)
// {
//   if(m==1)
//     return false;
//   else
//     return m && (!(m&(m-1)));
// }

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
//   long m=n;

//   while(isPower2(m)==false)
//   {
//     m++;
//   }
//   cout<<m/2<<"\n";
// }

// return 0;
// }


//Method 3
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
//   int max=1;
//   long cnt=0;

//   for(int i=0; i<n; i++)
//   {
//     if((max&i)!=0)
//     {
//       max=max&i;
//       cnt++;    
//     }
//   }
//   cout<<n-cnt<<"\n";
// }

// return 0;
// }