class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        int maxi=-1;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==arr[i])
                {
                    count++;
                }
            }
            if(count==arr[i])
            {
                // maxi = arr[i];
                maxi = max(maxi,arr[i]);
            }
        }
        return maxi;
    }
};