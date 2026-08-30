class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int n = nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int first=i;
            int second=i;
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]==nums[i])
                {
                    second=j;
                }
                else
                {
                    break;
                }
            }
            if(second-first+1==mpp[nums[i]])
            {
                c++;
            }
        }
        return c;

    }
};