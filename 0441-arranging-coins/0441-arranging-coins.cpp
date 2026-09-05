class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 0;
        long long high = n;

        while(low <= high){
            long long mid = low + (high - low )/2;
            long long coins = mid * (mid + 1)/2;

            if(coins <= n)  low = mid +1;
            else high = mid -1;
        }
        return high;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna