class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(0,2*n);
        for(int i=0;i<n;i++)
        {
            answer.push_back(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            answer.push_back(nums[i]);
        }
        return answer;
    }
};