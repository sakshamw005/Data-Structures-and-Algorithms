class Solution {
    public int sumCounts(List<Integer> nums) {
        int ans = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            int u = 0 ;
            int[] freq = new int[101] ;
            for(int j = i ; j<nums.size() ; j++){
                if(freq[nums.get(j)] == 0){
                    u++ ;
                }
                freq[nums.get(j)]++ ;
                ans = (ans + (u * u)) ;
            }
        }
        return ans ;
    }
}