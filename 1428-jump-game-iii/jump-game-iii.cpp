class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        unordered_set<int> set ;
        return solve(arr,start,set) ;
    }
    bool solve(vector<int>& arr, int i , unordered_set<int>& set ){
        if(i >= arr.size() || i < 0)return false ;
        if(set.count(i)){
            return false ;
        }
        set.insert(i) ;
        if(arr[i]==0){
            return true ;
        }
        bool left = solve(arr,i-arr[i],set) ;
        bool right = solve(arr,i+arr[i],set) ;
        return left || right ;
    }
};