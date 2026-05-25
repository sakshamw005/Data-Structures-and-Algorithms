class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.size();
        vector<bool> dp(n, false);
        dp[0] = true;
        int far = 0;

        for (int i = 0; i < n; i++) {
            if (!dp[i]) continue;

            int l = max(i + minJump, far + 1);
            int r = min(i + maxJump, n - 1);

            for (int j = l; j <= r; j++) {
                if (s[j] == '0') dp[j] = true;
            }
            far = max(far, r);

            if (dp[n - 1]) return true;
        }
        return dp[n - 1];
    }
};