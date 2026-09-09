class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        unordered_map<int,int> mp;

        for(int i=nums2.size()-1;i>= 0 ;i--){
            if(!st.empty()){
                while(!st.empty() && st.top() <= nums2[i] ) st.pop();
            }
            if(st.empty())  mp[nums2[i]] = -1;
            else mp[nums2[i]] = st.top();

            st.push(nums2[i]);
        }

        for(auto ele : nums1){
            ans.push_back(mp[ele]);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna