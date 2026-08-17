class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans = -1 ;
        int dis = INT_MAX ;
        for(int x = 0 ; x < drones.size() ; x++){
            vector<int> i = drones[x] ;
            int temp = abs(i[0] - target[0]) + abs(i[1] - target[1]);
            if(temp <= i[2] && temp < dis){
                ans = x ;
                dis = temp ;
            }
        }
        return ans;
    }
};