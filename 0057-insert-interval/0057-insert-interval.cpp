class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int n = intervals.size();
        bool insert = false;
        int start;
        for(int i =0; i<n; i++){
            start = intervals[i][0];

        if(insert == false && start>=newInterval[0]){
            res.push_back(newInterval);
            insert == true;
        }
        res.push_back(intervals[i]);
        }
        if(insert == false){
            res.push_back(newInterval);
        }
        
        vector<vector<int>> ans;
        int start1 = res[0][0];
        int end1 = res[0][1];
        int m = res.size();

        for(int j=0; j<m; j++){
            int start2 = res[j][0];
            int end2 = res[j][1];

            if(end1>=start2){
                start1 = start1;
                end1 = max(end1,end2);
                continue;
            }
            ans.push_back({start1,end1});
            start1 = start2;
            end1 = end2;
        }

        ans.push_back({start1,end1});
        return ans;
    }
};