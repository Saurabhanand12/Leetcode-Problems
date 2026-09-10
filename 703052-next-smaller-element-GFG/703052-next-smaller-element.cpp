class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        vector<int> ans(arr.size());
        stack<int> st;
        for(int i=arr.size()-1;i>= 0;i--){
            if(!st.empty()){
                while(!st.empty() && st.top() >= arr[i])  st.pop();
            }
            
            if(st.empty())   ans[i] = -1;
            else  ans[i] = st.top();
            
            st.push(arr[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna