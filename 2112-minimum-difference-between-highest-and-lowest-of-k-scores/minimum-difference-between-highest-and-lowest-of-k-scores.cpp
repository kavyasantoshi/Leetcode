class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int diff=0;
        int mindiff;
        sort(nums.begin(),nums.end());
        if(k==1)
        {
            return 0;
        }
        for(int i=0;i<k;i++)
        {
            diff = nums[k-1]-nums[0];
        }
        mindiff=diff;
        for(int i=k;i<n;i++)
        {
            diff=nums[i]-nums[i-k+1];
            mindiff=min(mindiff,diff);
        }
        return mindiff;
    }
};