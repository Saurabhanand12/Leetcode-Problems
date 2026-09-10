class Solution {
public:

    pair<int, int> solve(TreeNode* root, int &ans) {

        if(root == NULL)
            return {0, 0};

        // Left subtree
        pair<int, int> left = solve(root->left, ans);

        // Right subtree
        pair<int, int> right = solve(root->right, ans);

        // Current subtree
        int sum = left.first + right.first + root->val;
        int count = left.second + right.second + 1;

        // Average
        int avg = sum / count;

        if(avg == root->val)
            ans++;

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {

        int ans = 0;

        solve(root, ans);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna