class Solution {
public:
    int pod(int num){
        int ans = 1 ;
        while(num > 0){
            ans *= num%10 ;
            num /= 10 ;
        }
        return ans ;
    }
    int smallestNumber(int n, int t) {
        for(int i = n ; i <= n+10 ; i++){
            if(pod(i)%t==0)return i ;
        }
        return -1 ;
    }
};