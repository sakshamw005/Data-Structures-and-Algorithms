class Solution {
public:
    int solve(vector<vector<int>>& items , vector<int>& freq , int budget , int idx , vector<vector<int>>& memo){
        if(idx >= items.size() || budget <= 0){
            return 0 ;
        }
        if(memo[idx][budget]!=-1){
            return memo[idx][budget] ;
        }
        int p = items[idx][1] ;
        int res = solve(items,freq,budget,idx+1,memo) ;
        if(budget >= p){
            int g = 1 + freq[idx] ;
            res = max(res , g + solve(items,freq,budget - p , idx+1,memo)) ;
            res = max(res , 1 + solve(items,freq,budget - p , idx,memo)) ;
        }
        return memo[idx][budget] = res ;
    }
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        vector<int> freq(items.size(),0) ;
        for(int i = 0 ; i<items.size() ; i++){
            int c = 0 ;
            for(int j = 0 ; j<items.size() ; j++){
                if(i!=j && items[i][0]!=0 && (items[j][0] % items[i][0])==0){
                    c++ ;
                }
            }
            freq[i] = c ;
        }
        vector<vector<int>> memo(items.size() , vector<int>(budget+1,-1)) ;
        return solve(items,freq,budget,0,memo) ;
    }
};