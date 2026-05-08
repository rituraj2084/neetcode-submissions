class Solution {
public:
    void dfs(vector<vector<int>>& grid, int row, int col, int &num){
        if(row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] == 0){
            return;
        }
        num++;
        grid[row][col] = 0;
        dfs(grid, row-1, col, num);
        dfs(grid, row+1, col, num);
        dfs(grid, row, col-1, num);
        dfs(grid, row, col+1, num);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxNum = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    int num = 0;
                    dfs(grid, i, j, num);
                    maxNum = max(maxNum, num);
                }
            }
        }
        return maxNum;
    }
};
