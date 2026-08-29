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
        unordered_set<int>seen;
        seen.insert(n);
        while(n!=1)
        {
            n=SumOfSquares(n);
            if(seen.find(n)!=seen.end())
            {
                return false;
            }
            seen.insert(n);
        }
        return true;
    }
};