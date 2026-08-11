class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        int m = nums2.size();
        mpp[nums2[m-1]] = -1;
        for(int i=0;i<m-1;i++)
        {
           for(int j=i+1;j<m;j++)
           {
             if(nums2[j]>nums2[i])
             {
                mpp[nums2[i]] = nums2[j];
                break;
             }
           }
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(mpp.find(nums1[i])!=mpp.end())
            {
                nums1[i] = mpp[nums1[i]];
            }
            else
            {
                nums1[i] = -1;
            }
        }
        return nums1;
    }
};