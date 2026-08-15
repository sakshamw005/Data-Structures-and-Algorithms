class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size() ;
        long long sum = 0 ;
        int xr = 0 ;
        for(int i : nums){
            sum+=i;
            xr^=i;
        }
        if(sum==0)return 0;
        if(xr==0)return n-1 ;
        return n ;
    }
};