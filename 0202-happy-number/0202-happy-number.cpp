class Solution {
public:
        
        int fun(int x){
            int sum =0;
            while(x>0){
                int d = x%10;
                x = x/10;
                sum = sum + d*d;
            }
            return sum;
        }



    bool isHappy(int n) {

        int slow = n, fast = n;
        while(fast != 1){
            slow = fun(slow);
            fast = fun(fast);
            fast = fun(fast);

            if(slow == fast  && fast!= 1){
                return false;
            }
        }

        return true;
    }
};