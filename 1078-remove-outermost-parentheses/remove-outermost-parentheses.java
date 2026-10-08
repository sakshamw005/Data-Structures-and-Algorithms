class Solution {
    public String removeOuterParentheses(String s) {
        StringBuilder st = new StringBuilder() ;
        int var = 0 ;
        for(char x : s.toCharArray()){
            if(x=='('){
                if(var>0){
                    st.append(x) ;
                }
                var++ ;
            }
            else{
                var-- ;
                if(var>0){
                    st.append(x) ;
                }
            }
        }
        return st.toString() ;
    }
}