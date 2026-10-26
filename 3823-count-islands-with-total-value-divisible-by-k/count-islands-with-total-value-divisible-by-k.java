class Solution {
    public int countIslands(int[][] grid, int k) {
        int ans = 0 ;
        for(int i = 0 ; i<grid.length ; i++){
            for(int j = 0 ; j<grid[0].length ; j++){
                if(grid[i][j]!= 0 && sDFS(grid,i,j)%k == 0){
                    ans++ ;
                }
            }
        }
        return ans ;
    }
    public long sDFS(int[][] grid , int i , int j){
        if(i < 0 || i >= grid.length || j < 0 || j>=grid[0].length || grid[i][j] == 0){
            return 0 ;
        }
        long sum = grid[i][j];
        grid[i][j] = 0 ;
        sum += sDFS(grid,i+1,j);
        sum += sDFS(grid,i-1,j);
        sum += sDFS(grid,i,j+1);
        sum += sDFS(grid,i,j-1);
        return sum ;
    }
}