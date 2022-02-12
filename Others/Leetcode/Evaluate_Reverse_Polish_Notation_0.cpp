class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i=0; i<tokens.size(); i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
            {
                int op2=s.top();
                s.pop();
                int op1=s.top();
                s.pop();
                int result;
                if(tokens[i]=="+") result=op1+op2;
                else if(tokens[i]=="-") result=op1-op2;
                else if(tokens[i]=="*") result=op1*op2;
                else result=op1/op2;
                s.push(result);
            }
            else
            {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};