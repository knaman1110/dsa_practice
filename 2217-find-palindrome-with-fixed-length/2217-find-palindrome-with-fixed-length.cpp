class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
         int half = (intLength + 1) / 2;
        long long start = 1;
        for (int i = 1; i < half; i++) start *= 10;
        long long limit = start * 10;  

        vector<long long> ans;
        for (int q : queries) {
            long long h = start + q - 1;
            if (h >= limit) {
                ans.push_back(-1);
                continue;
            }
            string left = to_string(h);
            string right = left;
            reverse(right.begin(), right.end());
            if (intLength % 2 == 1) right = right.substr(1);
            ans.push_back(stoll(left + right));
        }
        return ans;
    }
};