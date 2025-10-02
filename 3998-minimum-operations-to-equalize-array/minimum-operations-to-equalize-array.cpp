class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int c = nums[0];
        int k=1;
        for(int i=1;i<n;i++)
        {
            if(c==nums[i])
            {
                k++;
            }
        }
        if(k==n)
        {
            return 0;
        }
        return 1;
    }
};