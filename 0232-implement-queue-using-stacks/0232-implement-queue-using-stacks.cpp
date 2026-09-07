class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(s2.empty()){
            while(!s1.empty()){
                int top = s1.top();
                s2.push(top);
                s1.pop();
            }
        }
        int top = s2.top();
        s2.pop();
        return top;
    }
    
    int peek() {
       while(s2.empty()){
            while(!s1.empty()){
                int top = s1.top();
                s2.push(top);
                s1.pop();
            }
        }
        return s2.top(); 
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna