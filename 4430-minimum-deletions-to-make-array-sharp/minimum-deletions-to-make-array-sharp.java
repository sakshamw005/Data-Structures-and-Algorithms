class Solution {
    public int minDeletions(int[] nums) {
        int ans = 0 ;
        for(int i = 1 ; i<nums.length ; i++){
            if(nums[i-1]==nums[i])ans++ ;
        }
        return ans;
    }
}