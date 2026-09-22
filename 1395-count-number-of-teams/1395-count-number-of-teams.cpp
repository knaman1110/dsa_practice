class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int ans = 0;

        for(int j = 0; j < n; j++) {

            int leftSmaller = 0;
            int leftGreater = 0;
            int rightSmaller = 0;
            int rightGreater = 0;

            
            for(int i = 0; i < j; i++) {
                if(rating[i] < rating[j]) {
                    leftSmaller++;
                }
                else {
                    leftGreater++;
                }
            }

            
            for(int k = j + 1; k < n; k++) {
                if(rating[k] < rating[j]) {
                    rightSmaller++;
                }
                else {
                    rightGreater++;
                }
            }

            
            ans += leftSmaller * rightGreater;

           
            ans += leftGreater * rightSmaller;
        }

        return ans;
    }
};