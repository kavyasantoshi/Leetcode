class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>matrix(m,vector<int>(n,0));
        int s = indices.size();
        for(int i=0;i<s;i++)
        {
            int k = indices[i][0];
            for(int j=0;j<n;j++)
            {
                matrix[k][j]++;
            }
        }
        for(int j=0;j<s;j++)
        {
            int l = indices[j][1];
            for(int i=0;i<m;i++)
            {
                matrix[i][l]++;
            }
        }
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]%2!=0)
                {
                    c++;
                }
            }
        }
        return c;
    }
};