class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> arr ;
        arr.push_back(0) ;
        for(int i = 0 ; i<gain.size() ; i++){
            arr.push_back(arr.back() + gain[i]) ;
        }
        int ans = INT_MIN ;
        for(int i : arr)ans = max(ans,i) ;
        return ans ;
    }
};