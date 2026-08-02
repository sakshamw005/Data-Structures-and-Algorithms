class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                long long g = __gcd((long long)nums[i], (long long)nums[j]);
                long long tmp = (1LL * nums[i] * nums[j]) / (g * g);
                ans = max(ans, tmp);
            }
        }
        return ans;
    }
};