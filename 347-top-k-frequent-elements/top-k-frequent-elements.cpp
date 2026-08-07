class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>res(mpp.begin(),mpp.end());
        sort(res.begin(),res.end(),
        [](const auto &a,const auto &b)
        {
           return a.second>b.second;
        });
        vector<int>ans(k,0);
        for(int i=0;i<k;++i)
        {
           ans[i] = res[i].first;
        }
        return ans;
    }
};