class Solution {
    public int minInsertions(String s) {
        int c = 0 , ans = 0 ;
        for(int i = 0 ; i<s.length() ; i++){
            if(s.charAt(i) == '('){
                if(c%2==1){
                    ans++ ;
                    c-- ;
                }
                c+=2 ;
            }
            else{
                c-- ;
                if(c < 0){
                    ans++ ;
                    c+=2 ;
                }
            }
        }
        return ans + c ;
    }
}