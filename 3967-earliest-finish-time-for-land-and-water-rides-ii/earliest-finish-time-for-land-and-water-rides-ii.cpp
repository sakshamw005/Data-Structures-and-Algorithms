class Solution {
public:
    int solve(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d){
        int ans = INT_MAX , earl = INT_MAX ;
        for(int i = 0 ; i<a.size() ; i++){
            earl = min(earl , a[i]+b[i]) ;
        }
        for(int i = 0 ; i<c.size() ; i++){
            int temp = max(earl,c[i]) + d[i] ;
            ans = min(ans,temp) ;
        }
        return ans;
    }
    int earliestFinishTime(vector<int>& lst, vector<int>& ld, vector<int>& wst, vector<int>& wd) {
        int land = solve(lst,ld,wst,wd) ;
        int water = solve(wst,wd,lst,ld) ;
        return min(land,water) ;
    }
};