class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans(nums.size()) ;
        int l = 0 , r = nums.size() - 1 ;
        for(int i = 0 , j = nums.size()-1 ; i<nums.size() ; i++ , j--){
            if(nums[i] < pivot){
                ans[l++] = nums[i] ;
            }
            if(nums[j] > pivot){
                ans[r--] = nums[j] ;
            }
        }
        while(l <= r){
            ans[l++] = pivot ;
        }
        return ans ;
    }
};