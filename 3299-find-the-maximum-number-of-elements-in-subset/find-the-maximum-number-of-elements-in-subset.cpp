class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> um;
        for (int x : nums) {
            um[(long long)x]++;
        }

        int ans = 1;

        if (um.count(1LL)) {
            ans = max(ans, (um[1LL] % 2 == 0) ? um[1LL] - 1 : um[1LL]);
        }
        for (auto &[key, val] : um) {
            if (key == 1) continue;
            long long curr = key;
            int len = 0;
            while (um.count(curr) && um[curr] >= 2) {
                len += 2;
                if (curr > 1000000000LL) break;
                curr = curr * curr;
            }
            if (um.count(curr) && um[curr] >= 1){
                len++;
            }
            else len--;
            ans = max(ans, len);
        }
        return ans;
    }
};