class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int count=0;
        int type=0;
        int result;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(baskets[j]>=fruits[i])
                {
                   count++;
                   baskets[j]=0;
                   fruits[i]=0;
                   break;
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(fruits[i]!=0)
            {
                sum++;
            }
        }
        return sum;
    }
};