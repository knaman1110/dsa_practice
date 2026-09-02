#include <iostream>
#include <string>
#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(auto i : s){
            if (isupper(i)) {        
            i = tolower(i);   
        }
            char c = i;
            if(isalnum(c)){
                temp += c;
            }
        }
        int n = temp.size();
        int left = 0;
        int right = n-1;
        while(left<right){
            if(temp[left]!=temp[right]){
                return false;
            }

            left++;
            right--;

        }
        return true;
    }
};