class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>result;
        for(auto& i: nums)
        {
            result[i]++;
        }
        vector<int>answer;
        for(auto& pair: result)
        {
            if(pair.second>n/3)
            {
                answer.push_back(pair.first);
            }
        }
        return answer;
    }
};