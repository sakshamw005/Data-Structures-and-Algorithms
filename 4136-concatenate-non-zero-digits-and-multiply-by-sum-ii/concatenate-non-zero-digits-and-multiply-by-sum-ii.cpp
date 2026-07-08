class Solution {
public:
    const long long mod = 1e9 + 7;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int> pref(s.size() + 1, 0);
        for (int i = 0; i < s.size(); i++)
            pref[i + 1] = pref[i] + (s[i] - '0');

        vector<long long> nums(s.size() + 1, 0);
        vector<int> len(s.size() + 1, 0);
        vector<long long> power(s.size() + 1, 1);

        for (int i = 1; i <= s.size(); i++)
            power[i] = (power[i - 1] * 10) % mod;

        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';

            nums[i + 1] = nums[i];
            len[i + 1] = len[i];

            if (digit != 0) {
                nums[i + 1] = (nums[i] * 10 + digit) % mod;
                len[i + 1]++;
            }
        }
        vector<int> ans;
        for (vector<int> i : queries) {
            int l = i[0], r = i[1];
            long long sum = pref[r + 1] - pref[l];
            int difff = len[r + 1] - len[l];
            long long dif = (nums[r + 1] - nums[l] * power[difff] % mod + mod) % mod;
            ans.push_back((sum * dif) % mod);
        }
        return ans;
    }
};