class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1;
        int high = num;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long val = 1LL * mid * mid;
            if(val == num) return true;
            else if(val > num) high = mid - 1;
            else low = mid +1;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna