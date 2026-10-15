class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            set<int>s;
            int c=0;
            for(int j=i;j<n;j++)
            {
                if(s.count(nums[j]))
                {
                    sum+=c*c;
                }
                else
                {
                    c++;
                    sum+=c*c;
                    s.insert(nums[j]);
                }
            }
        }
        return sum;
    }
};