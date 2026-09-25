class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int valid=-1;
        for(int i=n-2;i>=0;i--)
        {
           if(nums[i]<nums[i+1])
           {
              valid=i;
              break;
           }
        }
        if(valid==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        int m_indx=-1;
        for(int i=valid+1;i<n;i++)
        {
            if(nums[i]>nums[valid])
            {
                m_indx=i;
            }
        }
        swap(nums[valid],nums[m_indx]);
        reverse(nums.begin()+valid+1,nums.end());
    }
};