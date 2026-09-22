class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int,vector<int>,greater<int>>pq;

        int i;
        for(int i =n-k; i<n; i++){
            pq.push(nums[i]);
        }

        for(i = 0; i< n-k; i++){
            if(nums[i] >= pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
            else{
            continue;
            }
        }

        return pq.top();
    }
};