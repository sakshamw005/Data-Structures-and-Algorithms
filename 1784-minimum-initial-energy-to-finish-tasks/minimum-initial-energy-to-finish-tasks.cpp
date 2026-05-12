class Solution {
public:
    bool possible(long long ene, vector<vector<int>>& tasks) {
        for (int i = 0; i < tasks.size(); i++) {
            if (ene >= tasks[i][1]) {
                ene -= tasks[i][0];
            } else return false;
        }
        return true;
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(), [](const vector<int>& a, const vector<int>& b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });
        int ub = INT_MAX , lb = 0 ;
        int ans ;
        while(lb<=ub){
            int mid = lb + (ub-lb)/2 ;
            if(possible(mid,tasks)){
                ans = mid ;
                ub = mid - 1 ;
            }
            else{
                lb = mid + 1 ;
            }
        }
        return ans ;
    }
};