class Solution {
public:
    // bool check(unordered_map<int,int>& um , int k){
    //     for(auto& [key,val] : um){
    //         if(val>k)return true ;
    //     }
    //     return false ;
    // }
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l = 0 , r = 0 , n = nums.size() ;
        unordered_map<int,int> um ;
        int ans = 0 ;
        while(r < n){
            um[nums[r]]++ ;
            while(um[nums[r]] > k){
                um[nums[l]]-- ;
                l++ ;
            }
            ans = max(ans,r-l+1) ;
            r++ ;
        }
        return ans ;
    }
};