class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
           
        const long long MOD = 1000000007;
        
        long long sum = 0;
        long long maxPrefix = 0;
        long long maxSuffix = 0;
        
       
        for (int x : arr) {
            sum += x;
        }
        
        
        long long curr = 0;
        for (int x : arr) {
            curr += x;
            maxPrefix = max(maxPrefix, curr);
        }
        
        
        curr = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            curr += arr[i];
            maxSuffix = max(maxSuffix, curr);
        }
        
       
        long long maxSub = 0;
        curr = 0;
        
        for (int x : arr) {
            curr += x;
            curr = max(0LL, curr);
            maxSub = max(maxSub, curr);
        }
        
        long long ans;
        
        if (k == 1) {
            ans = maxSub;
        }
        else {
            ans = maxSuffix + maxPrefix;
            
            if (sum > 0) {
                ans += (long long)(k - 2) * sum;
            }
            
            ans = max(ans, maxSub);
        }
        
        return ans % MOD;
    }
};