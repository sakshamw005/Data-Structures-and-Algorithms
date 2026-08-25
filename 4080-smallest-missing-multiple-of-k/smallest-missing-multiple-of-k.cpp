class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> us ;
        for(int i : nums)us.insert(i) ;
        for(int i = 1 ; i<101 ; i++){
            int num = k*i ;
            if(us.find(num) == us.end()){
                return num; 
            }
        }
        return 101 ;
    }
};