class Solution {
    public int calculateScore(int a, int b) {
        int x = Integer.bitCount(a) , y = Integer.bitCount(b) ;
        return x>=y ?x*y : y/x ;
    }
}