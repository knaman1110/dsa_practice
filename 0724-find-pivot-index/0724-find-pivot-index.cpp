class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left =0;
        int sum =0;

        for(int i = 0; i<n; i++){
            sum+= nums[i];
        }
            
        
        for(int j = 0; j<n; j++){
            int right = (sum-nums[j]-left);

            if(left==right){
                return j;
            }
            left+= nums[j];
        }

        return -1;
    }
};