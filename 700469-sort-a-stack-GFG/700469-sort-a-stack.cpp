class Solution {
  public:
    void insert(stack<int>& st , int x){
        if(st.empty() || st.top() <= x){
            st.push(x);
            return ;
        }
        
        int top = st.top();
        st.pop();
        
        insert(st,x);
        
        st.push(top);
    }
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty()) return ;
        
        int x = st.top();
        st.pop();
        sortStack(st);
        
        insert(st,x);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna