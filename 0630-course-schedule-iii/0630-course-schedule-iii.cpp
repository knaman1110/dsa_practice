class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        
        int n = courses.size();
        int days = 0;

        
        priority_queue<int> pq;

        
        sort(courses.begin(), courses.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        for(int idx = 0; idx < n; idx++) {

            int duration = courses[idx][0];
            int lastDay = courses[idx][1];

            
            days += duration;
            pq.push(duration);

            
            if(days > lastDay) {

                
                days -= pq.top();
                pq.pop();
            }
        }

        return pq.size();
    }
};