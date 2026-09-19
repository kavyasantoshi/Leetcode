class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            int c=0;
        for(int j=1;j*j<=nums[i];j++)
          {
             if(nums[i]%j==0)
             {
                c++;
                if(nums[i]/j!=j)
                {
                    c++;
                }
             }
          }
          if(c==2) result.push_back(i);
        }
        if(result.size()<2) return 0;
        else return result.back()-result.front();
    }
};