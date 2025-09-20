class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int sum=0;
        int maxi=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
               sum+=accounts[i][j];
            }
            maxi=max(maxi,sum);
            sum=0;
        }
        return maxi;
    }
};