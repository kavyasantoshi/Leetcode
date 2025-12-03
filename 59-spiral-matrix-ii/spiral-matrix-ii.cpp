class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        int val=1;
        int left=0,top=0,right=n-1,bottom=n-1;
        while(left<=right && top<=bottom)
        {
        for(int i=left;i<=right;i++)
        {
            matrix[top][i]=val;
            val++;
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            matrix[i][right]=val;
            // matrix.push_back(matrix[i][right]);
            val++;
        }
        right--;
        if(left<=right)
        {
        for(int i=right;i>=left;i--)
        {
            matrix[bottom][i]=val;
            // matrix.push_back(matrix[i][bottom]);
            val++;
        }
        bottom--;
        }
        if(top<=bottom)
        {
        for(int i=bottom;i>=top;i--)
        {
            matrix[i][left]=val;
            // matrix.push_back(matrix[left][i]);
            val++;
        }
        left++;
        }
        }
        return matrix;
    }
};