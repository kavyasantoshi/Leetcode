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
    int sumOfPrimesInRange(int n) {
        int k = n;
        int rev=0;
        while(k!=0)
        {
           rev = rev*10+k%10;
           k = k/10;
        }
        int s = min(rev,n);
        int l = max(rev,n);
        int sum=0;
        for(int i=s;i<=l;i++)
        {
           if(isPrime(i))
           {
             sum+=i;
           }
        }
        return sum;
    }
};