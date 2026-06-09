class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxi = nums[0] , mini = nums[0] ;
        for(int i : nums){
            maxi = max(maxi,i) ;
            mini = min(mini,i) ;
        }
        return 1LL*(maxi-mini)*k ;
    }
};