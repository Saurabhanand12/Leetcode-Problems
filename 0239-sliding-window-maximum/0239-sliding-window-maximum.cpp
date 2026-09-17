class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k == 1) return nums;
        vector<int> ans;
        int n = nums.size();

        for(int i=0;i<=n-k;i++){
            int maxel = nums[i];
            for(int j=i;j<i+k;j++){
                maxel = max(nums[j],maxel);
            }
            ans.push_back(maxel);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna