class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mpp;
        for(char c:s)
        {
            mpp[c]++;
        }
        int changes=0;
        for(char c:t)
        {
           if(mpp[c]>0)
           {
              mpp[c]--;
           }
           else
           {
            changes++;
            cout<<changes<<" ";
           }
        }
        return changes;
    }
};