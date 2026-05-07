class Solution {
public:
    static vector<int> maxValue(vector<int>& nums) {
        const int n=nums.size();
        vector<int> pm(n), sm(n);
        pm[0]=nums[0];
        sm[n-1]=nums[n-1];
        for(int i=1; i<n; i++){
            const int x=nums[i], y=nums[n-1-i];
            pm[i]=max(pm[i-1], x);
            sm[n-1-i]=min(sm[n-i], y);
        }
        vector<int> ans(n);
        ans[n-1]=pm[n-1];
        for(int i=n-2; i>=0; i--){
            if(pm[i]>sm[i+1])ans[i]=ans[i+1];
            else ans[i]=pm[i];
        }
        return ans;
    }
};