class Solution {
public:
    int Minimum(vector<int>nums,int i,int n)
    {
       int mini=INT_MAX;
       for(int j=i;j<n;j++)
       {
          if(nums[j]<mini)
          {
            mini=nums[j];
          }
       }
       return mini;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int score=-1;
        int n = nums.size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
           if(nums[i]>maxi)
           {
             maxi=nums[i];
           }
           int mini = Minimum(nums,i,n);
           if(maxi-mini<=k)
           {
             score=i;
             break;
           }
        }
        return score;
    }
};