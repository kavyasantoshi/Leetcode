class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=2;j*j<=nums[i];j++)
            {
                if(nums[i]%j==0)
                {
                    mpp[j]++;
                    while(nums[i]%j==0)
                    {
                        nums[i] = nums[i]/j;
                    }
                }
            }
            if(nums[i]!=1)
            {
                mpp[nums[i]]++;
            }
        }
        return mpp.size();
    }
};