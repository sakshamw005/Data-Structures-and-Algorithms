class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end()) ;
        long long cur = mass ;
        for(int i : asteroids){
            if(cur < i)return false ;
            cur += i;
        }
        return true ;
    }
};