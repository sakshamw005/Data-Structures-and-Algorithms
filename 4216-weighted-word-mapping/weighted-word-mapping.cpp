class Solution {
public:
    int val(string s , vector<int>& weights){
        int sum = 0 ;
        for(int i = 0 ; i<s.size() ; i++){
            sum += weights[(s[i] - 'a')]; 
        }
        return sum ;
    }
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "" ;
        for(int i = 0 ; i<words.size() ; i++){
            int v = val(words[i],weights) % 26 ;
            //cout << v << '\n';
            ans += (char)(122 -  v) ;
        }
        return ans ;
    }
};