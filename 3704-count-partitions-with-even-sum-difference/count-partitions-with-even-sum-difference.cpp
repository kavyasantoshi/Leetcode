class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int total=0;
        int left=0;
        int right=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            left+=nums[i];
            right = total-left;
            if(abs(left-right)%2==0)
            {
                c++;
            }
        }
       if(c-1<0) return 0;
       else
       {
        return c-1;
       }
    }
};