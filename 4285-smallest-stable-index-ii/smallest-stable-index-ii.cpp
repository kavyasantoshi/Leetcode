class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>suffix(n);
        suffix[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<=suffix[i+1])
            {
                suffix[i]=nums[i];
            }
            else
            {
                suffix[i]=suffix[i+1];
            }
        }
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
           if(nums[i]>maxi)
           {
             maxi = nums[i];
           }
           int mini = suffix[i];
           if(maxi-mini<=k) return i;
        }
        return -1;


    }
};