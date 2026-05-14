class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int> um ;
        for(int i : nums)um[i]++ ;
        int tr = nums.size()-1 ;
        for(int i = 1 ; i<tr ; i++){
            if(um[i] !=1 )return false ;
        }
        return um[tr] == 2 ;
    }
};