class Solution {
public:
    string reverseWords(string s) {
        vector<string>res;
        int n = s.size();
        int i=0;
        while(i<n)
        {
            while(i<n && s[i]==' ') i++;
            if (i >= n) break; 
            string ans;
            while(i<n && s[i]!=' ')
            {
                ans+=s[i];
                i++;
            }
            res.push_back(ans);
        }
        reverse(res.begin(),res.end());
        string result="";
        for(auto i:res)
        {
          result+=i;
          result+=' ';
        }
        if (!result.empty()) {
          result.pop_back();
        }
        return result;
    }
};