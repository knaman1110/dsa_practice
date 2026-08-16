class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> res;
        stack<char> st;
        int n = s.size();

        for(int i =0; i<n; i++){
            st.push(s[i]);
        }

        while(!st.empty()){
            char c = st.top();
            st.pop();
            res.push_back(c);
        }

        s = res;
    }
};