class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int n = nums.size();
        int md = n % 2 == 1 ? nums[n/2] : (nums[n/2] + nums[n/2 -1]) / 2 ;
        int ans = 0 ;
        for(int i : nums){
            ans += abs(i-md) ;
        }
        return ans;
    }
};