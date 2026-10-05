class Solution {
public:
    int solve(int i , int j , string& s){
        if(i+1 == j)return 1;
        int c = 0 ;
        for(int k = i ; k <= j ; k++){
            char x = s[k] ;
            if(x == '('){
                c++ ;
            }
            else c-- ;
            if(c==0){
                if(k==j)return 2*solve(i+1,j-1,s) ;
                return solve(i,k,s) + solve(k+1,j,s) ;
            }
        }
        return 0 ;
    }
    int scoreOfParentheses(string s) {
        return solve(0,s.size()-1,s) ;
    }
};