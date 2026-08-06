class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
       unordered_map<int,int>result;
       for(auto& i: nums)
       {
         result[i]++;
       }
       for(auto& pair: result)
       {
        if(pair.second>n/2)
        {
            return pair.first;
        }
       }
       return -1;
    }
};