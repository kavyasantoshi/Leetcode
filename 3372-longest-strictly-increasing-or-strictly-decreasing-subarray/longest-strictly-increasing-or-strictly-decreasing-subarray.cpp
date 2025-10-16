class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int c=1;
        int maxi=c;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                c++;
                maxi=max(maxi,c);
            }
            else
            {
               c=1;
            }
        }
        c=1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                c++;
                maxi=max(maxi,c);
            }
            else
            {
               c=1;
            }
        }
        return maxi;
    }
};