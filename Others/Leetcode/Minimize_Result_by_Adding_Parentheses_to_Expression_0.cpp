class Solution {
public:
    string minimizeResult(string s) {
        string num1="",num2="";
        int flag=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='+') flag=1;
            else if(flag) num2+=s[i];
            else num1+=s[i];
        }
        // cout<<"\n"<<num1<<" "<<num2<<"\n";
        
        string m1="1",m2="1",n1=num1,n2=num2;
        string mul1="";
        int flag1=0,min=INT_MAX;
        for(int i=0; i<num1.size(); i++)
        {
            if(i!=0) {mul1+=num1[i-1]; flag1=1;}
            string nam1=num1.substr(i,num1.size()-i);
            int flag2=0;
            string mul2="",mul22="";
            for(int j=num2.size()-1; j>=0; j--)
            {
                if(j!=num2.size()-1) {mul22+=num2[j+1]; flag2=1;}
                mul2=mul22;
                reverse(mul2.begin(),mul2.end());
                string nam2=num2.substr(0,j+1);
                int cur=(stoi(nam1)+stoi(nam2));
                if(flag1) cur*=stoi(mul1);
                if(flag2) cur*=stoi(mul2);
                if(min>cur)
                {
                    min=cur;
                    n1=nam1; n2=nam2;
                    m1=mul1; m2=mul2;
                }
                // cout<<cur<<" "<<nam1<<" "<<nam2<<" "<<mul1<<" "<<mul2<<"\n";
            }
        }
        string ans="";
        if(m1!="") ans+=m1;
        ans+='(';
        ans+=n1;
        ans+='+';
        ans+=n2;
        ans+=')';
        if(m2!="") ans+=m2;
        
        return ans;
    }
};