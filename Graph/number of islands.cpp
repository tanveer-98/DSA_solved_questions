class SolutionDFS {
public:
    int paths[4][2] = {{0, 1}, {0, -1}, {1, 0}, { -1, 0}};
    bool issafe ( int r, int c , int rows, int cols, vector<vector<char> > & grid) {
        return r >= 0 && c >= 0 && r < rows && c < cols && grid[r][c] == '1';
    }


    void dfs(int r, int c, int rows, int cols , vector<vector<char> > & grid) {
        grid[r][c] = '0';
        for (int i = 0; i < 4; i++) {
            int r_ = r + paths[i][0];
            int c_ = c + paths[i][1];
            if (issafe(r_, c_, rows, cols, grid)) {
                dfs(r_, c_, rows, cols, grid);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int islands = 0;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if ( grid[r][c] == '1') {
                    islands++;
                    dfs(r, c, rows, cols, grid);
                }
            }
        }
        return islands;
    }
};
class Solution {
public:

    int paths[4][2] = {{0, 1}, {0, -1}, {1, 0}, { -1, 0}};
    bool issafe ( int r, int c , int rows, int cols, vector<vector<char> > & grid) {
        return r >= 0 && c >= 0 && r < rows && c < cols && grid[r][c] == '1' ;
    }

    void bfs(int sr, int sc, int rows, int cols , vector<vector<char> > & grid) {
        grid[sr][sc] = '0';
        queue<pair<int, int> > q;
        q.push({sr, sc});
        while (!q.empty()) {
            auto front = q.front();
            q.pop();
            int r = front.first;
            int c = front.second;
            for (int i = 0; i < 4; i++) {
                int r_ = r + paths[i][0];
                int c_ = c + paths[i][1];
                if (issafe(r_, c_, rows, cols, grid)) {
                    q.push({r_, c_});
                    grid[r_][c_] = '0';
                }
            }
        }
    }
    int solveBFS(vector<vector<char > > & grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int islands = 0;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if ( grid[r][c] == '1') {
                    islands++;
                    bfs(r, c, rows, cols, grid);
                }
            }
        }
        return islands;
    }
    int numIslands(vector<vector<char>>& grid) {
        return solveBFS(grid);
    }


};