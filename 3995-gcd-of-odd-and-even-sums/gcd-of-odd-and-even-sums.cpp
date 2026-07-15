class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n*n ;
        int eve = n*(n+1) ;
        return __gcd(odd,eve) ;
    }
};