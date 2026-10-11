class Solution {
    public int sumOfSquares(int[] nums) {
        int ans = nums[0]*nums[0] ;
        for(int i = 1 ; i<nums.length ; i++){
            if(nums.length % (i+1) == 0){
                ans = ans + (nums[i] * nums[i]) ;
            }
        }
        return ans ;
    }
}