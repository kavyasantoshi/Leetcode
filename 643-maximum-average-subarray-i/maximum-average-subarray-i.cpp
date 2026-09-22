class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxsum=0;
        double maxavg=INT_MIN;
        int i=0,j=0;
        while(i<n && j<n)
        {
            maxsum+=nums[j];
            while(i<n && j-i+1==k)
            {
               maxavg = max(maxavg,(maxsum/k));
               maxsum-=nums[i];
               i++;
            }
            j++;
        }
        return maxavg;
    }
};