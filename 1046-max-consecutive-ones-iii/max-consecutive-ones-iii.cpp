class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0,r=0;
        int c=0;
        int maxi=0;
        while(r<n)
        {
            c+=nums[r]^1;
            while(c>k)
            {
                c-=nums[l]^1;
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};