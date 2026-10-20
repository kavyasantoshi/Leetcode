class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                    visited[i][j] = 1;
                    break;
                }
            }
        }
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};
        int perimeter=0;
        while(!q.empty())
        {
            auto [r,c] = q.front();
            perimeter+=4;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1)
                {
                    if(visited[nr][nc]==-1)
                    {
                        perimeter--;
                        q.push({nr,nc});
                        visited[nr][nc]=1;
                    }
                    else
                    {
                        perimeter--;
                    }
                }
            }
        }
        return perimeter;
    }
};