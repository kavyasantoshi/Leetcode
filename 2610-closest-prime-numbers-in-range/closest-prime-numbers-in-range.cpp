class Solution {
public:
    bool isPrime(int n)
    {
        if(n<2) return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>res;
        for(int i=left;i<=right;i++)
        {
            if(isPrime(i))
            {
                res.push_back(i);
            }
        }
        if(res.size()<2) return {-1,-1};
        int a=res[0],b=res[1];
        int diff = b-a;
        for(int i=1;i<res.size()-1;i++)
        {
            if(res[i+1]-res[i]<diff)
            {
                a=res[i],b=res[i+1];
                diff = res[i+1]-res[i];
                if(diff<=2) return {a,b};
            }
        }
        return {a,b};
    }
};