class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q1;
    
    void push(int x) {
        q1.push(x);
        int size=q1.size();
        while(size>1)
        {
            q1.push(q1.front());
            q1.pop();
            size--;
        }
    }
    
    int pop() {
        int ans=q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
