class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return nums;
        vector<int>left(n);
        vector<int>right(n);
        left[0]=nums[0],left[n-1]=nums[n-1];
        right[0]=nums[0],right[n-1]=nums[n-1];
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>left[i-1])
            {
                left[i]=nums[i];
            }
            else
            {
                left[i]=left[i-1];
            }
        }
        for(int i=n-2;i>=1;i--)
        {
            if(nums[i]>right[i+1])
            {
                right[i]=nums[i];
            }
            else
            {
                right[i]=right[i+1];
            }
        }
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>left[i-1] || nums[i]>right[i+1])
            {
               ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[n-1]);
        return ans;
    }
};