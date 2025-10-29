class Solution {
public:
    int smallestNumber(int n) {
        int sq = round(sqrt(n));
        for(int i=0;i<=(sq+1);i++)
        {
            if(pow(2,i)>n)
            {
                return pow(2,i)-1;
                break;
            }
        }
        return 0;
    }
};