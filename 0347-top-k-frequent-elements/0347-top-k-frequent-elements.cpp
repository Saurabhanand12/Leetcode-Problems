class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;
        for(auto ele : nums){
            mp[ele]++;
        }

        for(auto ele : mp){
            pq.push({ele.second ,ele.first});
        }

        int i =0;
        while(i != k){
            ans.push_back(pq.top().second);
            pq.pop();
            i++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna