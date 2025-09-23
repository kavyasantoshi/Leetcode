class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int i=0;
        int min_length=INT_MAX;
        int n = nums.size();
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            while(sum>=target)
            {
                min_length = min(min_length,j-i+1);
                sum = sum - nums[i];
                i++;
            }
        }
        return (min_length==INT_MAX)?0:min_length;
    }
};