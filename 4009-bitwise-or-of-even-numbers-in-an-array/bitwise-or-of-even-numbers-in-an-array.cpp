class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
         int bit_wise = 0;
         for(int i=0;i<nums.size();i++)
         {
            if(nums[i]%2==0)
            {
                bit_wise = bit_wise | nums[i];
            }
         }
         return bit_wise;
    }
};