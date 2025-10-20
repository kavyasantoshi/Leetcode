class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxsum=0;
        double maxavg=INT_MIN;
        double maxi=INT_MIN;
        for(int i=0;i<k;i++)
        {
            maxsum+=nums[i];
            maxavg=maxsum/k;
        }
        for(int i=k;i<n;i++)
        {
           maxsum+=nums[i]-nums[i-k];
           maxi=max(maxi,maxsum);
           maxavg=max(maxavg,maxi/k);
        }
        return maxavg;
    }
};