class Solution {
public:
    bool check(vector<int>& freq){
        for(int i = 0 ; i < 26 ; i++){
            if(freq[i]>2)return false ;
        }
        return true ;
    }
    int maximumLengthSubstring(string s) {
        vector<int> freq(26,0) ;
        freq[s[0]-'a']++ ;
        freq[s[1]-'a']++ ;
        int l = 0 , ans = 2 ;
        for(int i = 2 ; i<s.size() ; i++){
            freq[s[i]-'a']++ ;
            if(check(freq)){
                ans = max(ans,i-l+1) ;
            }
            else{
                freq[s[l]-'a']-- ;
                l++ ;
            }
        }
        return ans ;
    }
};