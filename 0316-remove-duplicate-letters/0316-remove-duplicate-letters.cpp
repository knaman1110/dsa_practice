class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);
        vector<int> vis(26, 0);
        string ans = "";
        for (char c : s) { 
            freq[c - 'a']++; 
        } 
        for (char c : s) { 
            freq[c - 'a']--;
            if (vis[c - 'a']) {
             continue;
            } 
            while (!ans.empty() && ans.back() > c && freq[ans.back() - 'a'] > 0) {
                vis[ans.back() - 'a'] = 0;
                ans.pop_back();
                } 
            ans.push_back(c); 
            vis[c - 'a'] = 1;
        } 
        return ans;
    }
};