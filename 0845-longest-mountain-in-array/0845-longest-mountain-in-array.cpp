class Solution {
public:
    int longestMountain(vector<int>& arr) {
         int n = arr.size(), best = 0, i = 1;
        while (i < n - 1) {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                int l = i - 1;
                while (l > 0 && arr[l - 1] < arr[l]) l--;
                int r = i + 1;
                while (r < n - 1 && arr[r] > arr[r + 1]) r++;
                best = max(best, r - l + 1);
                i = r;
            } else {
                i++;
            }
        }
        return best;
    }
};