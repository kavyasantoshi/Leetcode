class Solution {
public:
    bool isprime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    int smallestValue(int n) {
        while(true)
        {
         int sum=0;
         int temp=n;
         for(int i=2;i*i<=temp;i++)
         {
             while(n%i==0)
             {
                sum+=i;
                n=n/i;
             }
         }
         if(n>1) sum+=n;
         if(sum==temp) return sum;
         n=sum;
        }
        return n;
    }
};