class Solution {
public:

    void solve(vector<int>& nums, vector<int>& curr,
               vector<vector<int>>& ans, vector<bool>& used) {

        
        if (curr.size() == nums.size()) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            
            if (used[i]) {
                continue;
            }

            
            curr.push_back(nums[i]);
            used[i] = true;

            
            solve(nums, curr, ans, used);

            
            used[i] = false;
            curr.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> used(nums.size(), false);

        solve(nums, curr, ans, used);

        return ans;
    }
};