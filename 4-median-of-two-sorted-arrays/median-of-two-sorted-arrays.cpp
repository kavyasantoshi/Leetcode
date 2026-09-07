class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int n = nums1.size();
        int m = nums2.size();
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            {
                res.push_back(nums1[i]);
                i++;
            }
            else
            {
                res.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n)
        {
            res.push_back(nums1[i]);
            i++;
        }
        while(j<m)
        {
            res.push_back(nums2[j]);
            j++;
        }
        if((n+m)%2!=0)
        {
            double odd = res[(n+m)/2];
            return odd;
        }
        else
        {
           double even = (res[(n+m)/2] + res[((n+m)/2)-1])/2.0;
           return even;
        }
    }
};