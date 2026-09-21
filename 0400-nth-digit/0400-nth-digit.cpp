class Solution {
public:
    int findNthDigit(int n) {
          long digits = 1;      
        long count = 9;       
        long start = 1;       
        long N = n;           

        
        while (N > digits * count) {
            N -= digits * count;
            digits++;
            count *= 10;
            start *= 10;
        }

        
        long num = start + (N - 1) / digits;

        
        int digitIndex = (N - 1) % digits;
        string numStr = to_string(num);
        return numStr[digitIndex] - '0';
    }
};