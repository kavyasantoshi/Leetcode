class Solution {
public:
    int SumOfSquares(int n)
    {
        int res=0;
        while(n!=0)
        {
            res+=(n%10)*(n%10);
            n/=10;
        }
        return res;
    }
    bool isHappy(int n) {
        unordered_map<int,int>mpp;
        mpp[n]++;
        while(n!=1)
        {
            n=SumOfSquares(n);
            if(mpp.find(n)!=mpp.end())
            {
                return false;
            }
            mpp[n]++;
        }
        return true;
    }
};