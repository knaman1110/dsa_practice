class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
             vector<int> pos[26];
        for (int i = 0; i < (int)s.size(); i++)
            pos[s[i] - 'a'].push_back(i);

        unordered_map<string, bool> cache;
        int count = 0;

        for (auto& w : words) {
            auto it = cache.find(w);
            if (it != cache.end()) {
                count += it->second;
                continue;
            }
            int prev = -1;
            bool ok = true;
            for (char ch : w) {
                auto& lst = pos[ch - 'a'];
                auto k = upper_bound(lst.begin(), lst.end(), prev);
                if (k == lst.end()) {
                    ok = false;
                    break;
                }
                prev = *k;
            }
            cache[w] = ok;
            count += ok;
        }
        return count;
    }
};