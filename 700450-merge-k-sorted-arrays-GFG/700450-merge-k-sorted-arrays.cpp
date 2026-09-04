class Solution {
public:

    vector<int> mergeArrays(vector<vector<int>>& mat) {

        vector<int> ans;

        // {value, row, column}
        priority_queue<tuple<int, int, int>,vector<tuple<int, int, int>>,
            greater<tuple<int, int, int>>> pq;

        int k = mat.size();

        // Step 1: Push first element of every row
        for (int i = 0; i < k; i++) {
            pq.push({mat[i][0], i, 0});
        }

        // Step 2: Process heap
        while (!pq.empty()) {

            auto [value, row, col] = pq.top();
            pq.pop();

            // Add minimum element
            ans.push_back(value);

            // Step 3: Push next element from same row
            if (col + 1 < mat[row].size()) {

                pq.push({
                    mat[row][col + 1],
                    row,
                    col + 1
                });
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna