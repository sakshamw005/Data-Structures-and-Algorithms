class Solution {
    public int reverseDegree(String s) {
        int ans = 0 ; 
        for(int i = 0 ; i<s.length() ; i++){
            char cur = s.charAt(i) ;
            ans = ans + (i+1)*(26 - (cur - 'a')) ; 
        }
        return ans;
    }
}