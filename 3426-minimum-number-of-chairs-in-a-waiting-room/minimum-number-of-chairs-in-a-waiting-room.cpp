class Solution {
public:
    int minimumChairs(string s) {
        int waiting=0;
        int maxi=0;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='E')
            {
               waiting++;
               maxi=max(maxi,waiting);
            }
            else
            {
              waiting--;
            }
        }
        return maxi;
        

    }
};