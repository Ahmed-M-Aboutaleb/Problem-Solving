class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ROWS = grid.size();
        if(!ROWS)
            return 0;
        int COLS = grid[0].size(), island = 0;
        for(int r = 0; r < ROWS; r++) {
            for(int c = 0; c < COLS; c++) {
                if(grid[r][c] == 1) {
                    island = max(island, dfs(grid, r,c, ROWS, COLS));
                }
            }
        }
        return island;
    }
    int dfs(vector<vector<int>>& grid, int r, int c, int ROWS, int COLS) {
       if(min(r,c) < 0 || r == ROWS || c == COLS || grid[r][c] == 0)
            return 0; 
        grid[r][c] = 0;
        int count = 1;
        count+= dfs(grid, r+1,c, ROWS, COLS);
        count+= dfs(grid, r-1,c, ROWS, COLS);
        count+= dfs(grid, r,c+1, ROWS, COLS);
        count+= dfs(grid, r,c-1, ROWS, COLS);
        return count;
    }
};