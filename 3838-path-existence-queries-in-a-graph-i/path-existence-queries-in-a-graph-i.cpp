class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> num(nums.size()) ;
        num[0] = 1 ;
        for(int i = 1 ; i<nums.size() ; i++){
            if(abs(nums[i]-nums[i-1]) <= maxDiff){
                num[i] = num[i-1] ;
            }
            else{
                num[i] = num[i-1] + 1 ; ;
            }
        }
        // for(int i : num)cout << i << " " ;
        vector<bool> ans ;
        for(vector<int>& i : queries){
            if(num[i[0]] == num[i[1]]){
                ans.push_back(true) ;
            }
            else{
                ans.push_back(false) ;
            }
        }
        return ans ;
    }
};