class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> lefts(n, -1);
        vector<int> rights(n, n);

        stack<int> st;

        // Previous Smaller Element
        for(int i = 0; i < n; i++) {

            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if(!st.empty())
                lefts[i] = st.top();

            st.push(i);
        }

        // Clear stack
        while(!st.empty())
            st.pop();

        // Next Smaller Element
        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if(!st.empty())
                rights[i] = st.top();

            st.push(i);
        }

        // Calculate maximum area
        long long maxA = 0;

        for(int i = 0; i < n; i++) {

            long long width = rights[i] - lefts[i] - 1;

            long long area = 1LL * width * heights[i];

            maxA = max(maxA, area);
        }

        return maxA;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna