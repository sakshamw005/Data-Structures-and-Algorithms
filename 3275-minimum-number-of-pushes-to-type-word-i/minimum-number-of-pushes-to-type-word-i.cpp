class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0 ;
        int n = word.size() ;
        int mul = 1 ;
        while(n > 0){
            ans += min(8,n)*(mul++) ;
            n -= 8 ;
        }
        return ans;
    }
};