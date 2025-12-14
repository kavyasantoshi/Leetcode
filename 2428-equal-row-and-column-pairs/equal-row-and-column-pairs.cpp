class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<string>rows;
        vector<string>cols;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            string s ="";
            for(int j=0;j<m;j++)
            {
                s+=to_string(grid[i][j]) + ",";
            }
            rows.push_back(s);
        }
        for(int j=0;j<m;j++)
        {
             string s ="";
            for(int i=0;i<n;i++)
            {
                s+=to_string(grid[i][j]) + ",";
            }
             cols.push_back(s);
        }
        int count=0;
        for(auto r:rows)
        {
            for(auto c:cols)
            {
                if(r==c)
                {
                    count++;
                }
            }
        }
        return count;
    }
};