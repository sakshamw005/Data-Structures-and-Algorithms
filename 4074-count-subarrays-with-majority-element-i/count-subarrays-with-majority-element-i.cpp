class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;
        for (int l = 0; l < n; l++) {
            unordered_map<int,int> freq;
            for (int r = l; r < n; r++) {
                freq[nums[r]]++;
                if(freq[target] > (r - l + 1) / 2)ans++;
            }
        }
        return ans;
    }
};