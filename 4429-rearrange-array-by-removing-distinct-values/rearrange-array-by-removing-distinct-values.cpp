class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        vector<int>ans;
        int k = mpp.size();
        while(ans.size()<n)
        {
           for(auto& x:mpp)
           {
              if(x.second>0)
              {
                ans.push_back(x.first);
                x.second--;
              }
           }
        }
        return ans;
    }
};