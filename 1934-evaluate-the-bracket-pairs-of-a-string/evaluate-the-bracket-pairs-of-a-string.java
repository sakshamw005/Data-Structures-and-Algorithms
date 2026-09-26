class Solution {
    public String evaluate(String s, List<List<String>> knowledge) {
        Map<String,String> map = new HashMap<>();
        for(List<String> i : knowledge){
            map.put(i.get(0),i.get(1)) ;
        }
        StringBuilder st = new StringBuilder() ;
        for(int i = s.length()-1 ; i>=0 ; i--){
            if(s.charAt(i) != ')')st.append(s.charAt(i)) ;
            else{
                StringBuilder ans = new StringBuilder() ;
                i--;
                while(s.charAt(i)!='('){
                    ans.append(s.charAt(i--)) ;
                }
                String x = map.getOrDefault(ans.reverse().toString(),"?") ;
                st.append(new StringBuilder(x).reverse()) ;
            }
        }
        return st.reverse().toString() ;
    }
}

// y
// e
// a
// h