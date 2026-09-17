class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> nge(n, n);
        stack<int> st;

        st.push(n - 1);

        for (int i = n - 2; i >= 0; i--) {

            while (!st.empty() && nums[i] >= nums[st.top()]) st.pop();
            
            if (st.empty())  nge[i] = n;
            else  nge[i] = st.top();

            st.push(i);
        }

        // Sliding window part
        vector<int> ans;

        for (int i = 0; i <= n - k; i++) {
            int j = i;

            while (nge[j] < i + k) j = nge[j];
    
            ans.push_back(nums[j]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna