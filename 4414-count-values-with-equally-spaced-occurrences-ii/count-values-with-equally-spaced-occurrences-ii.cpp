class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]].push_back(i);
        }
        int c=0;
        for(auto i:mpp)
        {
            int k = i.second.size();
            if(k>=3)
            {
                vector<int>res = i.second;
                int m = res.size();
                int diff = res[1]-res[0];
                int flag=0;
                for(int j=2;j<m;j++)
                {
                   if(res[j]-res[j-1]!=diff)
                   {
                      flag=1;
                   }
                }
                if(flag==0)
                {
                    c++;
                }
            }
        }
        return c;
    }
};