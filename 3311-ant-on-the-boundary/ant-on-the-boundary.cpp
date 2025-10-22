class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
           if(nums[i]==0)
           {
              c++;
           }
        }
        return c;
    }
};