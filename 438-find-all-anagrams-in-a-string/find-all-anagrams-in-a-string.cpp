class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();
        vector<int>p_array(26,0);
        vector<int>s_array(26,0);
        for(char c:p)
        {
            p_array[c-'a']++;
        }
        vector<int>answer;
        int i=0,j=0;
        while(j<n)
        {
            s_array[s[j]-'a']++;
            if(j-i+1==k)
            {
               if(p_array == s_array)
               {
                 answer.push_back(i);
               }
               s_array[s[i]-'a']--;
               i++;
            }
            j++;
        }
        return answer;
    }
};