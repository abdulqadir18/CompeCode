 //Your code here
   void insert1(stack<int>&s, int temp)
    {
        if(s.size()==0 || s.top()<=temp) {s.push(temp); return;}
        int val=s.top();
        s.pop();
        insert1(s,temp);
        s.push(val);
    }
   void SortedStack :: sort()
   {
       if(s.size()==1) return;
       int temp=s.top();
       s.pop();
       SortedStack :: sort();
       insert1(s,temp); 
       
   }