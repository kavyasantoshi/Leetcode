class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int maxi=0;
        for(auto i : m)
        {
            maxi=max(maxi,i.second);
        }
        int count=0;
        for(auto k:m)
        {
            if(k.second == maxi)
            {
               count+=k.second;
            }
        }
        return count;
    }
};