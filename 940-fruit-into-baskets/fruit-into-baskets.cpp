class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mpp;
        int n = fruits.size();
        int i=0;
        int j=0;
        int maxi = 0;
        while(j<n)
        {
            mpp[fruits[j]]++;
            if(mpp.size()>2)
            {
              mpp[fruits[i]]--;
              if(mpp[fruits[i]]==0)
              {
                mpp.erase(fruits[i]);
              }
              i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};