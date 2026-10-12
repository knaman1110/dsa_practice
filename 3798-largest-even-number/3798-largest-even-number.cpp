class Solution {
public:
    string largestEven(string s) {
        int i = s.length() - 1;

        while (i >= 0 && s[i] != '2') {
            i--;
        }

        if (i == -1) return "";

        return s.substr(0, i + 1);
    }
};

