class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
           int freq[10001] = {0};

        for (int x : nums) {
            freq[x]++;

            if (freq[x] > 1) {
                return x;
            }
        }

        return -1;
    }
};