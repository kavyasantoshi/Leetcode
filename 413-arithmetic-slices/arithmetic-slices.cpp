class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        int c=0;
        int indi=0;
        for(int i=2;i<n;i++)
        {
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2])
            {
                indi++;
                c+=indi;
            }
            else
            {
                indi=0;
            }
        }
        return c;
    }
};