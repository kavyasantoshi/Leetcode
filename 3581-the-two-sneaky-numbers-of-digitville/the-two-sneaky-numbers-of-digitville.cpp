class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       unordered_map<int,int>m;
       vector<int>arr;
       int n = nums.size();
       for(int i=0;i<n;i++)
       {
          m[nums[i]]++;
       }
       for(auto i:m)
       {
         if(i.second==2)
         {
            arr.push_back(i.first);
         }
       }
       return arr;
    }
};