class Solution {
public:
    int integerReplacement(int n) {
         long long x = n;
        int steps = 0;
        while (x != 1) {
            if (x % 2 == 0) {
                x /= 2;
            } else if (x == 3 || (x & 3) == 1) {
                x -= 1;
            } else {
                x += 1;
            }
            steps++;
        }
        return steps;
    }
};