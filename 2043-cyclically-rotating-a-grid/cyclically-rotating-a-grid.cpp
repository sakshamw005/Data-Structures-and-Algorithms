class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size() , n = grid[0].size() ;
        int layers = min(m/2,n/2) ;
        for(int layer = 0 ; layer<layers ; layer++){
            vector<int> temp ;
            int top = layer ;
            int left = layer ;
            int bottom = m - layer - 1 ;
            int right = n - layer - 1 ;
            for(int i = left ; i<=right ; i++){
                temp.push_back(grid[top][i]) ;
            }
            for(int i = top+1 ; i<bottom ; i++){
                temp.push_back(grid[i][right]) ;
            }
            for(int i = right ; i>=left ; i--){
                temp.push_back(grid[bottom][i]) ;
            }
            for(int i = bottom-1 ; i>=top+1 ; i--){
                temp.push_back(grid[i][left]) ;
            }
            int size = temp.size() ;
            int start = k % size ;
            int idx = start ;

            for(int j = left; j <= right; j++) {
                grid[top][j] = temp[idx];
                idx++;
                if(idx == size){
                    idx = 0;
                }
            }
            for(int i = top + 1; i <= bottom - 1; i++) {
                grid[i][right] = temp[idx];
                idx++;
                if(idx == size){
                    idx = 0;
                }
            }
            for(int j = right; j >= left; j--) {
                grid[bottom][j] = temp[idx];
                idx++;
                if(idx == size){
                    idx = 0;
                }
            }

            for(int i = bottom - 1; i >= top + 1; i--) {
                grid[i][left] = temp[idx];
                idx++;
                if(idx == size){
                    idx = 0;
                }
            }
        }

        return grid;
    }
};