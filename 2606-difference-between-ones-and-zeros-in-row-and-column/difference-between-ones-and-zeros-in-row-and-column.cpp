class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int>rowone;
        vector<int>rowzero;
        int oner,zeror;
        for(int i=0;i<n;i++)
        {
            oner=0,zeror=0;
            for(int j=0;j<m;j++)
            {
               if(grid[i][j]==0)
               {
                 zeror++;
               }
               else
               {
                 oner++;
               }
            }
            rowone.push_back(oner);
            rowzero.push_back(zeror);
        }
        vector<int>colone;
        vector<int>colzero;
        int onec,zeroc;
        for(int j=0;j<m;j++)
        {
            onec=0,zeroc=0;
            for(int i=0;i<n;i++)
            {
               if(grid[i][j]==0)
               {
                 zeroc++;
               }
               else
               {
                onec++;
               }
            }
            colone.push_back(onec);
            colzero.push_back(zeroc);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                grid[i][j]=rowone[i]+colone[j]-rowzero[i]-colzero[j];
            }
        }
        return grid;
    }
};