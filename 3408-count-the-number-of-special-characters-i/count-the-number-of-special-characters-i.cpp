class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> us(word.begin(), word.end());
        int ans = 0;
        for(char ch = 'a'; ch <= 'z'; ch++) {
            if(us.count(ch) && us.count(ch - 'a' + 'A')) {
                ans++;
            }
        }
        return ans;
    }
};