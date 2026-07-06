class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });
        int ans = intervals.size() ;
        int a = intervals[0][0] , b = intervals[0][1] ;
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][1] <= b) {
                ans--;
            } 
            else {
                b = intervals[i][1];
            }
        }
        return ans ;
    }
};