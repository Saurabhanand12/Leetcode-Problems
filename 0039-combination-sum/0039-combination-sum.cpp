class Solution {
public:
    void combi(int idx,vector<int>& candi,int tar,vector<vector<int>>& ans,vector<int>& temp){
        if(idx == candi.size()){
            if(tar == 0)  ans.push_back(temp);
            return;
        }

        if(candi[idx] <= tar){
           temp.push_back(candi[idx]);
           combi(idx,candi,tar-candi[idx],ans,temp);
           temp.pop_back();
        } 
        combi(idx+1,candi,tar,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candi, int tar) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        combi(0,candi,tar, ans,temp);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna