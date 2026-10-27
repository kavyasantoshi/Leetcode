class Solution {
public:
    void bfs(int row,int col,vector<vector<int>> &visited,vector<vector<char>> grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        visited[row][col]=1;
        q.push({row,col});
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};
        while(!q.empty())
        {
           int r = q.front().first;
           int c = q.front().second;
           q.pop();
           for(int i=0;i<4;i++)
           {
             int nr = r+dr[i];
             int nc = c+dc[i];
             if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='1' && !visited[nr][nc])
             {
                visited[nr][nc]=1;
                q.push({nr,nc});
             }
           }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int count=0;
        for(int r=0;r<n;r++)
        {
            for(int c=0;c<m;c++)
            {
                if(!visited[r][c] && grid[r][c]=='1')
                {
                   count++;
                   bfs(r,c,visited,grid);
                }
            }
        }
        return count;

    }
};