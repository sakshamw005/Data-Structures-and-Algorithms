class Solution {
    public int totalWaviness(int num1, int num2) {
        int ans = 0 ;
        for(int i = num1 ; i<=num2 ; i++){
            String s = String.valueOf(i) ;
            if(s.length()<3)continue ;
            int m = 0 ;
            for(int j = 1 ; j<s.length()-1 ; j++){
                int a = s.charAt(j-1) - '0' , b = s.charAt(j) - '0' , c = s.charAt(j+1) - '0' ;
                if(b>a && b>c)m++ ;
                else if(b<a && b<c)m++ ;
            }
            ans+=m ;
        }
        return ans ;
    }
}