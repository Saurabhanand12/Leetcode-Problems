class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;

        for(int i = 1; i <= n; i++) {
            if(n >= i) {
                n -= i;
                count++;
            }
            else {
                break;
            }
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna