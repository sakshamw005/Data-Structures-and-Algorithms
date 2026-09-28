class Solution {
    public int maxDepth(String s) {
        Stack<Character> st = new Stack<>() ;
        int ans = 0 ; 
        for(char x : s.toCharArray()){
            if(x=='(')st.push(x) ;
            if(!st.isEmpty() && x==')')st.pop() ;
            ans = Math.max(ans,st.size()) ;
        }
        return ans ;
    }
}