class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string> us;
        for(auto& i : bannedWords){
            us.insert(i);
        }
        int c = 0 ;
        for(string i : message){
            if(us.find(i) != us.end()){
                c++ ;
            }
            if(c>=2)return true ;
        }
        return false;
    }
};