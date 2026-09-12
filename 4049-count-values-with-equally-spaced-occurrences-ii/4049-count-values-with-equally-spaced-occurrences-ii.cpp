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
            vector<int> indexs = x.second.second;

            if(indexs.size() <= 2) continue;
            bool isvalid = true;

            int diff = indexs[1] - indexs[0];

            for(int i=2;i<indexs.size();i++){
                if(indexs[i] - indexs[i-1] != diff){
                    isvalid = false;
                    break;
                }
            }
            if(isvalid) count++;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna