class Solution {
    public int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    public int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }

    public int maxLength(int[] nums) {
        int ans = 0;
        for (int i = 0; i < nums.length; i++) {
            long prod = 1;
            int g = 0;
            long l = 1;
            for (int j = i; j < nums.length; j++) {
                prod *= nums[j];
                g = gcd(g, nums[j]);
                l = lcm((int)l, nums[j]);
                if (prod == l * g) {
                    ans = Math.max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
}