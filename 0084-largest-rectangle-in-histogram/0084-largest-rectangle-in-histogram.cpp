class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxA = 0;
        for(int i=0;i<=heights.size();i++){
            while(!st.empty() && (i == n || heights[st.top()] >= heights[i])){
                int height = heights[st.top()];
                st.pop();

                int width;
                if(st.empty()) width = i;
                else  width = i-st.top()-1;

                maxA = max(maxA,width* height);
            }
            if(i <n) st.push(i);
        }
        return maxA;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna