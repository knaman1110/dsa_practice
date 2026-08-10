class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];
        int minSum = nums[0];
        int currentMax = nums[0]; 
        int currentMin = nums[0];
        int sum =0;
        int a1;
        for(int j =0; j<n; j++){
            sum += nums[j];
        }

        for(int i =1; i<n; i++){
            currentMax = max(currentMax + nums[i], nums[i]);
            
            currentMin = min(currentMin + nums[i], nums[i]);

            maxSum = max(maxSum, currentMax);
            minSum = min(minSum, currentMin);
        }
            
       if(maxSum < 0){
          return maxSum;
        }

       a1 = (sum-minSum);
      return max(maxSum,a1);
    }
};