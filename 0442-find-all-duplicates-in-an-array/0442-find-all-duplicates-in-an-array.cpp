class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int> res;
        for (int x : nums) {
            int i = abs(x) - 1;
            if (nums[i] < 0) {
                res.push_back(abs(x));
            } else {
                nums[i] = -nums[i];
            }
        }
        return res;
    }
};