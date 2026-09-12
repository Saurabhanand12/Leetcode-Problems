class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count =0;
        unordered_map<int,pair<int,vector<int>>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].first++;
            mp[nums[i]].second.push_back(i);
        }

        for(auto x : mp){
            if(x.second.first == 3){
                int i1 =  x.second.second[0];
                int i2 = x.second.second[1];
                int i3 = x.second.second[2];
                if((i1 < i2 < i3) && ( i2 - i1 == i3 - i2) ) count++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna