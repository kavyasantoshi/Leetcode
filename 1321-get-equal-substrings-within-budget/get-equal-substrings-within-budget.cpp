class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
         vector<int>result(s.size(),0);
         for(int i=0;i<s.size();i++)
         {
             result[i] = abs(s[i]-t[i]);
         }
         int n = result.size();
         int i=0;
         int j=0;
         int sum=0;
         int maxi = -1;
         while(i<n && j<n)
         {
            sum+=result[j];
            while(i<n && j<n && sum>maxCost)
            {
                sum-=result[i];
                i++;
            }
            if(sum<=maxCost){
               maxi = max(maxi,j-i+1);
            }
            j++;
         }
         return maxi;
    }
};