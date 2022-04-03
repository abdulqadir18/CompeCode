#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    char c=s[s.size()-2];
    string n;
    n+=s[0];
    n+=s[1];
    int x=stoi(n);
    string ans;
    if(x==12)
    {
        if(c=='A') ans+="00";
        else ans+="12";
    }
    else
    {
        if(c=='P')x+=12;
        if(x>=10) ans+=to_string(x);
        else
        {
            ans+="0";
            ans+=to_string(x);
        }
    }
    string sub=s.substr(2,6);
    ans+=sub;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
