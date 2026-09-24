class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxsum=INT_MIN;
        double sum=0;
        int i=0,j=0;
        while(i<n && j<n)
        {
            sum+=nums[j];
            while(i<n && j-i+1==k)
            {
            //    maxavg = max(maxavg,(maxsum/k));
               maxsum=max(maxsum,sum);
               sum-=nums[i];
               i++;
            }
            j++;
        }
        double maxavg = maxsum/k;
        return maxavg;
    }
};