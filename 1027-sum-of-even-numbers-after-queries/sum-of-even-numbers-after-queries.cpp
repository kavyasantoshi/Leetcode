class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        int indi,val;
        int sum=0;
        vector<int>answer;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                sum+=nums[i];
            }
        }
        for(int i=0;i<n;i++)
        {
                val=queries[i][0];
                indi=queries[i][1];
                if((nums[indi]+val)%2==0)
                {
                   if(nums[indi]%2==0)
                   {
                      sum-=nums[indi];
                      sum+=(nums[indi]+val);
                      answer.push_back(sum);
                      nums[indi]+=val;
                      
                   }
                   else{
                     sum+=(nums[indi]+val);
                     answer.push_back(sum);
                     nums[indi]+=val;
                   }
                }
                else
                {
                    if(nums[indi]%2==0)
                    {
                        sum-=nums[indi];
                        answer.push_back(sum);
                        nums[indi]+=val;
                    }
                    else
                    {
                        answer.push_back(sum);
                        nums[indi]+=val;
                    }
                }
        }
        return answer;
    }
};