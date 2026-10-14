class Solution {
public:
      vector<vector<int>> result;
    vector<int> current;

    void solve(vector<int>& nums, int index, int target) {
        if (target == 0) {              
            result.push_back(current);
            return;
        }
        if (target < 0 || index == nums.size()) return;   

        current.push_back(nums[index]);
        solve(nums, index, target - nums[index]);
        current.pop_back();             

        solve(nums, index + 1, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, 0, target);
        return result;
    }  
};