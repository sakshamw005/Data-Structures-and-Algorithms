class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int> um ;
        for(char c : s){
            um[c]++ ;
        }
        string ans = "" ;
        vector<bool> vis(26,false) ;
        stack<char> st ;
        for(int i = 0 ; i<s.size() ; i++){
            um[s[i]]-- ;
            if(vis[s[i]-'a'])continue ;
            while(!st.empty() && (st.top() > s[i] && um[st.top()] > 0)){
                vis[st.top()-'a'] = false ;
                st.pop() ;
            }
            vis[s[i]-'a'] = true ;
            st.push(s[i]) ;
        }
        while(!st.empty()){
            ans += st.top() ;
            st.pop() ;
        }
        reverse(ans.begin(),ans.end()) ;
        return ans ;
    }
};