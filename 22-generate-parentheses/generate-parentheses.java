class Solution {
    public void solve(List<String> ans ,int n , String curr , int o , int c){
        if(o == n && c==n){
            ans.add(curr) ;
            return ;
        }
        if(o > n || c > o)return ;
        solve(ans,n,curr+'(',o+1,c) ;
        solve(ans,n,curr+')',o,c+1) ;
    }
    public List<String> generateParenthesis(int n) {
        List<String> ans = new ArrayList<>() ;
        solve(ans,n,"",0,0) ;
        return ans ;
    }
}