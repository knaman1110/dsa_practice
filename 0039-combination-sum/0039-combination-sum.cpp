class Solution {
public:
      vector<vector<int>> result;
    vector<int> current;

    void solve(vector<int>& nums, int index, int target) {
        if (target == 0) {              // found a valid combination
            result.push_back(current);
            return;
        }
        if (target < 0 || index == nums.size()) return;   // dead end

        // choice 1: take nums[index], stay on same index (reuse allowed)
        current.push_back(nums[index]);
        solve(nums, index, target - nums[index]);
        current.pop_back();             // undo the choice

        // choice 2: skip nums[index], move to next
        solve(nums, index + 1, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, 0, target);
        return result;
    }  
};