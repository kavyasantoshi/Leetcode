class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int count=0;
            int sum=0;
            for(int j=1;j<=sqrt(nums[i]);j++)
            {
                if(nums[i]%j==0)
                {
                    count+=1;
                    sum+=j;
                    if((nums[i]/j)!=j)
                    {
                      count+=1;
                      sum+=nums[i]/j;
                    }
                }
            }
            if(count==4)
            {
                ans+=sum;
            }
        }
        return ans;
    }
};