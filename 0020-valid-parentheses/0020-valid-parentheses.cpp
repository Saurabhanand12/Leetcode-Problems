class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i =0 ;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')  st.push(s[i]);
            else{
                if(st.size() == 0) return false;
                char top  = st.top();
                st.pop();
                if(top == '(' and s[i] != ')' || top == '{' and s[i] != '}' || top == '[' and s[i] != ']'  ) return false;
            }
        }
 
        if(st.size() != 0) return false;
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna