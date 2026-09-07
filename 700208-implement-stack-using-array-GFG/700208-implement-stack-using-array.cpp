class myStack {
  public:
    int st[1000];
    int n ;
    int top;
    
    myStack(int n) {
        // Define Data Structures
        this -> n = n;
        top = -1;
    }

    bool isEmpty() {
        // check if the stack is empt
        return top == -1;
    }

    bool isFull() {
        return top == n-1;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(!isFull()){
            top++;
            st[top] = x;
        }
        
    }

    void pop() {
        // removes an element from the top of the stack
        if(!isEmpty()){
            top--;
        }
    }

    int peek() {
        // Returns the top element of the stack
        if(!isEmpty()){
            return st[top];
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna