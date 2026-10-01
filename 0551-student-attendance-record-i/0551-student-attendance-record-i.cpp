class Solution {
public:
    bool checkRecord(string s) {
        
        int absent = 0;
        int late = 0;

        for (char c : s) {

            if (c == 'A') {
                absent++;
            }

            if (c == 'L') {
                late++;
            }
            else {
                late = 0;
            }

            
            if (absent >= 2) {
                return false;
            }

            
            if (late >= 3) {
                return false;
            }
        }

        return true;
    }
};