class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int n = nums.size();

        int maxsum = nums[0];
        int minsum = nums[0];

        int maxSum = nums[0];
        int minSum = nums[0];

        int sum = 0;

        for(int j = 0; j < n; j++) {
            sum += nums[j];
        }

        for(int i = 1; i < n; i++) {

            int v1 = maxsum + nums[i];
            int v2 = minsum + nums[i];
            int v3 = nums[i];

            maxsum = max(v1, v3);
            minsum = min(v2, v3);

            maxSum = max(maxSum, maxsum);
            minSum = min(minSum, minsum);
        }

        if(maxSum < 0) {
            return maxSum;
        }

        int a1 = sum - minSum;

        return max(maxSum, a1);
    }
};