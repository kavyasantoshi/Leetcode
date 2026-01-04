class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size();
        string rev = "";
        for(int i=0;i<k;i++)
        {
            rev.push_back(s[i]);
        }
        reverse(rev.begin(),rev.end());
        for(int i=k;i<n;i++)
        {
            rev.push_back(s[i]);
        }
        return rev;
    }
};