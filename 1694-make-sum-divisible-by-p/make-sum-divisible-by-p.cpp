class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long remainder=0;
        for(int i=0;i<n;i++)
        {
            remainder+=nums[i];
        }
        long long target = remainder%p;
        if(target==0) return 0;
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        long long ps=0;
        int mini = n;
        for(int i=0;i<n;i++)
        {
            ps+=nums[i];
            int curr = ps%p;
            int need = (curr-target+p)%p;
            if(mpp.find(need)!=mpp.end())
            {
                mini = min(mini,i-mpp[need]);
            }
            mpp[curr] = i;
        }
        return mini==n?-1:mini;
    }
};