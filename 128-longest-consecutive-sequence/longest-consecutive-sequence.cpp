class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int> Nums(nums.begin(), nums.end());
        nums.assign(Nums.begin(), Nums.end());
        int count=1;
        int maxi = 0;
        for(int i=0;i<nums.size()-1;i++){
           if(nums[i]==nums[i+1]-1)
           {
             count++;
           }
           else
           {
             maxi = max(maxi,count);
             count=1;
           }
        }
        maxi = max(maxi,count);
        return maxi;
    }
};