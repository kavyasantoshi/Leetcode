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
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        // if(n<3) return 0;
        vector<int>first;
        vector<int>second;
        for(int i=0;i<n;i++)
        {
           if(isPrime(i))
           {
             first.push_back(nums[i]);
           }
           else
           {
             second.push_back(nums[i]);
           }
        }
        long long sum=0;
        for(auto i:first)
        {
            sum+=i;
        }
        long long sum1=0;
        for(auto i:second)
        {
            sum1+=i;
        }
        return abs(sum-sum1);
    }
};