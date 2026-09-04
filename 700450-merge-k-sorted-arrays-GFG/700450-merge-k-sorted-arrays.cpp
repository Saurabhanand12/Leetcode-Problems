class Solution {
public:

    vector<int> mergeTwo(vector<int>& a, vector<int>& b) {

        vector<int> ans;

        int i = 0, j = 0;

        while (i < a.size() && j < b.size()) {

            if (a[i] <= b[j])
                ans.push_back(a[i++]);
            else
                ans.push_back(b[j++]);
        }

        while (i < a.size())
            ans.push_back(a[i++]);

        while (j < b.size())
            ans.push_back(b[j++]);

        return ans;
    }

    vector<int> mergeArrays(vector<vector<int>>& mat) {

        vector<int> ans = mat[0];

        for (int i = 1; i < mat.size(); i++) {
            ans = mergeTwo(ans, mat[i]);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna