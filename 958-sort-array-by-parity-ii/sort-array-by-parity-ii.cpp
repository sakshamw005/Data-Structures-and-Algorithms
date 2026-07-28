class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> o , e , ans(nums.size()) ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]%2!=0)o.push_back(nums[i]) ;
            else e.push_back(nums[i]) ;
        }
        for(int i = 0 ; i<nums.size() ; i++){
            if(i%2==0){
                ans[i] = e.back() ;
                e.pop_back() ;
            }
            else{
                ans[i] = o.back() ;
                o.pop_back() ;
            }
        }
        return ans ;
    }
};