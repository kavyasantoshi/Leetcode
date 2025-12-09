class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int>result;
        for(int i=1;i<n;i+=2)
        {
           result.push_back(nums[i]);
           result.push_back(nums[i-1]);
        }
        return result;
    }
};