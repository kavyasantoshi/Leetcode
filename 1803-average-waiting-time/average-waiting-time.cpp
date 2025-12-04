class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        // int m = customers[0].size();
        int time=customers[0][0];
        double sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<2;j++)
            {
               if(time>=customers[i][j-1])
               {
                 time+=customers[i][j];
                 sum+=time-(customers[i][j-1]);
               }
               else
               {
                 time=customers[i][j-1];
                 time+=customers[i][j];
                 sum+=time-(customers[i][j-1]);
               }
            }
        }
        double average = sum/n;
        return average;

    }
};