class Solution {
    int ans = 0;
    HashMap<String, Integer> map = new HashMap<>();
    int solve(int i, int[] nums, long num, long den, long k) {
        if (i == nums.length) {
            return num == k * den ? 1 : 0;
        }
        String key = i + "*" + num + "*" + den ;
        if(map.containsKey(key)){
            return map.get(key);
        }
        int ans = 0 ;
        ans += solve(i + 1, nums, num * nums[i], den, k);
        ans += solve(i + 1, nums, num, den * nums[i], k);
        ans += solve(i + 1, nums, num, den, k);
        map.put(key,ans);
        return ans;
    }

    public int countSequences(int[] nums, long k) {
        return solve(0, nums, 1, 1, k);
    }
}