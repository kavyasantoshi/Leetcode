class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        for(int i=1;i<n;i++)
        {
            if(cost[i]<cost[i-1])
            {
                continue;
            }
            else
            {
                cost[i]=cost[i-1];
            }
        }
        return cost;
    }
};