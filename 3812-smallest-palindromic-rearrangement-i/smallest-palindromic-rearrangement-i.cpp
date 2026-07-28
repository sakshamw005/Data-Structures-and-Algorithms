class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        for(char c : s)
            freq[c - 'a']++;

        string l = "", mid = "";

        for(int i = 0; i < 26; i++) {
            l.append(freq[i] / 2, i + 'a');
            if(freq[i] % 2)mid.push_back(i + 'a');
        }

        string r = l;
        reverse(r.begin(), r.end());

        return l + mid + r;
    }
};