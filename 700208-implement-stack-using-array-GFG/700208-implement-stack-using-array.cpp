class myStack {
  public:
    vector<int> st;
    int n ;
    
    myStack(int n) {
        // Define Data Structures
        this -> n = n;
    }

    bool isEmpty() {
        // check if the stack is empt
        if(st.size() > 0) return false;
        else return true;
    }

    bool isFull() {
        if(st.size() == n) return true;
        else return false;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(!isFull()){
            st.push_back(x);
        }
        
    }

    void pop() {
        // removes an element from the top of the stack
        if(!isEmpty()){
            st.pop_back();
        }
    }

    int peek() {
        // Returns the top element of the stack
        if(!isEmpty()){
            return st.back();
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna