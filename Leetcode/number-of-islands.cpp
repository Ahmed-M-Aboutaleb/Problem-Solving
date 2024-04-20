class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ROWS = grid.size();
        if(!ROWS)
            return 0;
        int COLS = grid[0].size(), island = 0;
        for(int r = 0; r < ROWS; r++) {
            for(int c = 0; c < COLS; c++) {
                if(grid[r][c] == '1') {
                    dfs(grid, r,c, ROWS, COLS);
                    island++;
                }
            }
        }
        return island;
    }
    void dfs(vector<vector<char>>& grid, int r, int c, int ROWS, int COLS) {
       if(min(r,c) < 0 || r == ROWS || c == COLS || grid[r][c] == '0')
            return; 
        grid[r][c] = '0';
        dfs(grid, r+1,c, ROWS, COLS);
        dfs(grid, r-1,c, ROWS, COLS);
        dfs(grid, r,c+1, ROWS, COLS);
        dfs(grid, r,c-1, ROWS, COLS);
    }
};