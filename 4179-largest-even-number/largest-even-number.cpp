class Solution {
public:
    string largestEven(string s) {
        string res = "";
        int n = s.size();
        while(n>0 && s[n-1]=='1')
        {
            n = n-1;
        }
        for(int i=0;i<n;i++)
        {
            res.push_back(s[i]);
        }
        return res;
    }
};