class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long cur = 0;
        for (int i = 0; i < k; i++) cur += nums[i];
        long long best = cur;
        for (int i = k; i < (int)nums.size(); i++) {
            cur += nums[i] - nums[i - k];
            best = max(best, cur);
        }
        return (double)best / k;
    }
};