class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long>score(n,0);
        int maxi=0;
        score[0] = nums[0]+max(maxi,nums[0]);
        maxi = max(maxi,nums[0]);
        for(int i=1;i<n;i++)
        {
            long long sum = (nums[i]+max(maxi,nums[i]))+score[i-1];
            score[i]=sum;
            maxi = max(maxi,nums[i]);
        }
        return score;
    }
};