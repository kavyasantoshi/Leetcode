class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        long left=0,right=0;
        for(int i=0;i<n/2;i++)
        {
            left+=nums[i];
        }
        for(int i=n/2;i<n;i++)
        {
            right+=nums[i];
        }
        int ans=0;
        if(left>right || right>left)
        {
            ans++;
        }
        for(int i=1;i<n/2;i++)
        {
           left=left-nums[i-1];
           left=left+nums[(n/2)+(i-1)];
           right=right+nums[i-1];
           right=right-nums[(n/2)+(i-1)];
           if(left>right || right>left)
            {
              ans++;
            }
        }
        return ans;
    }
};