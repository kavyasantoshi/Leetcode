class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                res.push_back(nums[i]);
            }
        }
        int k = res.size();
        while(n-k!=0)
        {
            res.push_back(0);
            k++;
        }
        nums = res;
    }
};