class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> f(26,0);

        int res=0;
        int max_count = 0;
        int low =0;

        for(int high=0; high< s.size(); high++){
            f[s[high]-'A']++;

            int len = high-low+1;
            max_count = max(max_count, f[s[high] - 'A']);
            int diff = len-max_count;

            while(diff>k){
                f[s[low]-'A']--;

                low++;
                len = high - low + 1;
                 diff = len - max_count;
            }

            res = max(res,high-low+1);
        }
    
            return res;
    }
};