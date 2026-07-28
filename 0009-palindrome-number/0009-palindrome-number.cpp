class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0;
        int original = x;
        int remainder;

        if(x<0){
            return false;
        }
        
         while(x!=0){
            remainder = x%10;
            reverse = reverse*10 + remainder;
            x = x/10; 
         }

         if(original==reverse){
            return true; 
         }

         else{
            return false;
         }
        
    }
};