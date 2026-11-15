class Solution {
    public int numOfSubarrays(int[] arr) {
        int mod=1000000007, e=1, o=0;
        int ans=0;
        long sum=0;
        for(int i=0;i<arr.length;i++){
            sum+=arr[i];
            if(sum%2==0){
                ans=(ans+o)%mod;
                e++;
            }
            else{
                ans=(ans+e)%mod;
                o++;
            }
        }
        return ans;
    }
}