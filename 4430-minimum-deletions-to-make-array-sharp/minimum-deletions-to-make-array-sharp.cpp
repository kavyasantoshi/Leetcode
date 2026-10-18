class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n = nums.size();
        int dele=0;
        for(int i=0;i<n-1;i++)
        {
            int k = nums[i]^nums[i+1];
            // cout<<k<<" ";
           if(k==0)
           {
              dele++;
           }
        }
        return dele;
    }
};