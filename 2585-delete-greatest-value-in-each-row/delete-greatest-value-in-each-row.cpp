class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            sort(grid[i].begin(),grid[i].end());
        }
        int answer=0;
        for(int j=m-1;j>=0;j--)
        {
            int maxi=0;
            for(int i=0;i<n;i++)
            {
               if(grid[i][j]>maxi)
               {
                 maxi=grid[i][j];
               }
            }
            answer+=maxi;
        }
        return answer;
    }
};