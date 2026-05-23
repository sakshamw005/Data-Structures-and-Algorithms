class Solution {
public:
    bool check(vector<int>& nums) {
        int x = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                x++ ;
            }
        }
        return x==0 || x==1 ? true : false ;
    }
};