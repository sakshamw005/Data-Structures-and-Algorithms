class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> us ;
        for(int i = 0 ; i < arr1.size() ; i++){
            string s = to_string(arr1[i]) ;
            for(int j = 1 ; j <= s.size() ; j++){
                us.insert(s.substr(0, j)) ;
            }
        }
        int ans = 0 ;
        for(int i = 0 ; i < arr2.size() ; i++){
            string s = to_string(arr2[i]) ;
            for(int j = 1 ; j <= s.size() ; j++){
                if(us.find(s.substr(0, j)) != us.end()){
                    ans = max(ans, j) ;
                }
            }
        }
        return ans ;
    }
};