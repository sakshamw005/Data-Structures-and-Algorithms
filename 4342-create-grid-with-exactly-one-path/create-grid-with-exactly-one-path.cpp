class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> arr(m,string(n,'#')) ;
        for(int i = 0 ; i < n ; i++){
            arr[0][i] = '.' ;
        }
        for(int i = 1 ; i < m ; i++){
            arr[i][n-1] = '.' ;
        }        
        return arr ;
    }
};