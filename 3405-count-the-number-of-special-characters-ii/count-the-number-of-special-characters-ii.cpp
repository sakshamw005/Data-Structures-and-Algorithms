class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> uc(26,-1) , lc(26,-1) ;
        for(int i = 0 ; i<word.size() ; i++){
            char cur = word[i] ;
            if(isupper(cur) && uc[cur-'A']==-1){
                uc[cur-'A'] = i ;
            }
        }
        for(int i = word.size()-1 ; i>=0 ; i--){
            char cur = word[i] ;
            if(islower(cur) && lc[cur-'a']==-1){
                lc[cur-'a'] = i ;
            }
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (lc[i] != -1 && uc[i] != -1 && lc[i] < uc[i]) {
                ans++;
            }
        }
        return ans ;
    }
};