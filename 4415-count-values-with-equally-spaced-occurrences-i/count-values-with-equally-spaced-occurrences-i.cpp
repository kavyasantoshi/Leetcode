class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto pair:mpp)
        {
            const vector<int>& res = pair.second;
            if(res.size()==3)
            {
                int i1 = res[0];
                int i2 = res[1];
                int i3 = res[2];
                if((i2-i1)==(i3-i2))
                {
                  ans++;
                }
            }
        }
        return ans;
    }
};