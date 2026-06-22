class Solution {
public:
    int maxNumberOfBalloons(string text) {
        //b -> 1 , a -> 1 , l -> 2 , o -> 2 , n -> 1
        unordered_map<char,int> um ;
        for(int i = 0 ; i<text.size() ; i++){
            um[text[i]]++ ;
        }
        return min({um['b'] , um['a'] , um['l']/2 , um['o']/2 , um['n']}) ;
    }
};