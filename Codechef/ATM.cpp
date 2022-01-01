#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int withdrawl;
    double i_balance, f_balance;
    
    //input
    cin>>withdrawl>>i_balance;
    cout << fixed << showpoint;
    cout << setprecision(2);
    
    //logic
    if((withdrawl%5==0)&&(withdrawl+0.5<=i_balance))
    {
        f_balance=i_balance-withdrawl-0.50;
        cout<<f_balance;
      
    }
    else
        cout<<i_balance;
	return 0;
}
// #include <iostream>
// #include<iomanip>
// using namespace std;

// int main() {
//     // your code goes here
//     int r;
//     cin >> r;
//     float balance;
//     cin >> balance;
    
//     float amount;
    
//     if (r%5==0 && r<balance ){
//         amount = float(balance - r - 0.5);
//         cout << fixed;
//         cout << setprecision(2) << amount;
//     }
//     else {
//         cout<< fixed;
//         cout << setprecision(2) << balance;
//     }
//     return 0;
// }