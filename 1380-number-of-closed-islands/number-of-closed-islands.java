class Solution {
    public int closedIsland(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        boolean[][] seen = new boolean[m][n];
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0 && !seen[i][j] && bfs(i, j, m, n, grid, seen)) {
                    count++;
                }
            }
        }
        return count;
    }

    public boolean bfs(int x, int y, int m, int n, int[][] grid, boolean[][] seen) {
        Queue<int[]> q = new LinkedList<>();
        q.offer(new int[]{x, y});
        seen[x][y] = true;
        boolean var = true;

        int[] dirx = {0, 1, 0, -1};
        int[] diry = {-1, 0, 1, 0};

        while (!q.isEmpty()) {
            int[] temp = q.poll();
            x = temp[0];
            y = temp[1];

            for (int i = 0; i < 4; i++) {
                int r = x +dirx[i];
                int c = y +diry[i];
                if (r < 0 || r >= m || c < 0 || c >= n) {
                    var = false;
                } 
                else if (grid[r][c] == 0 && !seen[r][c]) {
                    q.offer(new int[]{r, c});
                    seen[r][c] = true;
                }
            }
        }
        return var;
    }
}