class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>res (mpp.begin(),mpp.end());
        sort(res.begin(),res.end(),[](const auto& a,const auto& b){
            if(a.second == b.second)
            {
                return a.first>b.first;
            }
            else
            {
                return a.second<b.second;
            }
        });
        vector<int>final;
        for(auto &pair:res)
        {
            final.insert(final.end(), pair.second, pair.first);
        }
        return final;
    }
};