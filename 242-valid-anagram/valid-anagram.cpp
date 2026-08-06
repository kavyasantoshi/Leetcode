class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int s_len = s.length();
        int t_len = t.length();
        if(s_len==t_len)
        {
            if(s==t)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
};