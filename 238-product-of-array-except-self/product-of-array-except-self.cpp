class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=nums[i]*prefix[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            nums[i]*=nums[i+1];
        }
        nums[0]=nums[1];
        for(int i=1;i<n-1;i++)
        {
            nums[i]=prefix[i-1]*nums[i+1];
        }
        nums[n-1]=prefix[n-2];
        return nums;
    }
};