class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s ;
        t[0] = ' ' ;
        t[t.size()-1] = ' ' ;
        return t.find(s) != -1 ;
    }
};