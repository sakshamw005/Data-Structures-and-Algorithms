class Solution {
    public String solve(int num , int sum){
        int n = 9;
        StringBuilder sb = new StringBuilder();
        while(num-->0){
            while(n > 0 && sum - n < 0)n-- ;
            sb.append(n) ;
            sum -= n ;
        }
        return sb.toString() ;
    }
    public String maxSumOfSquares(int num, int sum) {
        //if(sum >= num*10)return "" ;
        String s = solve(num,sum) ;
        if (s.isEmpty()) return "";
        int x = 0 ;
        for(char i : s.toCharArray()){
            x += (i - '0') ;
        }
        return x == sum ? s : "" ;
    }
}