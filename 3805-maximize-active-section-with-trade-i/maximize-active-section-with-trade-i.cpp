class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int c = count(s.begin(), s.end(), '1');
        vector<int> z;
        int i = 0;
        while (i < n) {
            int start = i;
            while (i < n && s[i] == s[start]) {
                ++i;
            }
            if (s[start] == '0') {
                z.push_back(i - start);
            }
        }

        int m = z.size();
        if (m < 2) {
            return c;
        }
        int ans = 0;
        for (int i = 0; i < m - 1; ++i) {
            ans = max(ans, z[i] + z[i + 1]);
        }
        return c + ans;
    }
};