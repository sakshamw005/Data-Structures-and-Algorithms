class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans ;
        for(int i = 1 ; i<=9 ; i++){
            int cur = i , next = i+1 ;
            while(cur <= high && next <= 9){
                cur = cur*10 + next ;
                if(cur >= low && cur <= high){
                    ans.push_back(cur) ;
                }
                next++ ;
            }
        }
        sort(ans.begin(),ans.end()) ;
        return ans ;
    }
};