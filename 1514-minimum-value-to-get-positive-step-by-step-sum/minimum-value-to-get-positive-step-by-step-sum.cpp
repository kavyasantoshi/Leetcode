class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
           nums[i] = nums[i-1] + nums[i];
        }
        sort(nums.begin(),nums.end());
        return max(1,1-nums[0]);
    }
};