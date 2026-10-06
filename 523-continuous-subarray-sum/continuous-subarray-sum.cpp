class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        mpp[0] = -1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int rem = sum%k;
            if(mpp.count(rem) && i-mpp[rem]>=2)
            {
                return true;
            }
            if(!mpp.count(rem)){
              mpp[rem]=i;
            }
        }
        return false;
    }
};