class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, pair<int,int>>,vector<pair<int, pair<int,int>>>,
        greater<pair<int, pair<int,int>>>> pq;

        for(auto ele : points){
            int x = ele[0];
            int y = ele[1];

            int val = x * x + y * y;

            pq.push({val,{x,y}});
        }
        int i =0;
        while(i != k){
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
            i++;
        }

       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna