class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> a = arr ;
        if(arr.size()==0)return {} ;
        sort(a.begin(),a.end()) ;
        unordered_map<int,int> um; 
        um[a[0]] = 1 ;
        for(int i = 1; i<a.size() ; i++){
            if(a[i] > a[i-1]){
                um[a[i]] = um[a[i-1]] + 1 ;
            }
        } 
        vector<int> ans(arr.size()) ;
        for(int i =0 ;  i<arr.size() ; i++){
            ans[i] = um[arr[i]] ;
        }
        return ans ;
    }
};