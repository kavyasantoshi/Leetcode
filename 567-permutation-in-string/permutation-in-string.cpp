class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<int>s1_array(26,0);
        vector<int>s2_array(26,0);
        for(char c:s1)
        {
           s1_array[c-'a']++;
        }
        int flag=0;
        int i=0,j=0;
        while(j<m)
        {
            s2_array[s2[j]-'a']++;
            if(j-i+1==n)
            {
               if(s1_array==s2_array)
               {
                  return true;
               }
               s2_array[s2[i]-'a']--;
               i++;
            }
            j++;
        }
        return false;
    }
};