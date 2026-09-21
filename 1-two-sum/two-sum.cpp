class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
           int sum = target-nums[i];
           if(mpp.find(sum)==mpp.end())
           {
              mpp[nums[i]] = i;
           }
           else
           {
              return {mpp[sum],i};
           }
        }
        return {-1,-1};
    }
};                                                                                          