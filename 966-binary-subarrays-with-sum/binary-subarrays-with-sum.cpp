class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        unordered_map<int,int>mp;
        mp[0] = 1;
        int sum=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int r = sum-goal;
            c+=mp[r];
            mp[sum]++;
        }
        return c;
    }
};