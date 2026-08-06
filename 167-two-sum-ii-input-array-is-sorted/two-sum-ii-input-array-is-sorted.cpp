class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i=0;i<n;i++)
        {
           int l=i+1,h=n-1;
           int remain = target - numbers[i];
           while(l<=h)
           {
              int mid = (l+h)/2;
              if(numbers[mid]==remain)
              {
                return {i+1,mid+1};
              }
              else if(numbers[mid]<remain)
              {
                 l =mid+1;
              }
              else
              {
                h=mid-1;
              }
           }
        }
        return {0,0};
    }
};