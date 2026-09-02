class Solution {
public:
    vector<int> topKSumPairs(vector<int>& A, vector<int>& B, int K) {

        int N = A.size();

        sort(A.begin(), A.end(), greater<int>());
        sort(B.begin(), B.end(), greater<int>());

        priority_queue<pair<int, pair<int, int>>> pq;
        set<pair<int, int>> visited;

        pq.push({A[0] + B[0], {0, 0}});
        visited.insert({0, 0});

        vector<int> ans;

        while (K-- && !pq.empty()) {

            auto top = pq.top();
            pq.pop();

            int sum = top.first;
            int i = top.second.first;
            int j = top.second.second;

            ans.push_back(sum);

            // Move down
            if (i + 1 < N && visited.find({i + 1, j}) == visited.end()) {
                pq.push({A[i + 1] + B[j], {i + 1, j}});
                visited.insert({i + 1, j});
            }

            // Move right
            if (j + 1 < N && visited.find({i, j + 1}) == visited.end()) {
                pq.push({A[i] + B[j + 1], {i, j + 1}});
                visited.insert({i, j + 1});
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna