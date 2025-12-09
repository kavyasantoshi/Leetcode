class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        while(n>2)
        {
            for(int i=0;i<n-1;i++)
            {
               int num = (s[i]-'0' + s[i+1]-'0')%10;
               s[i]= num+'0';
            }
            n--;
        }
        if(s[0]==s[1]) return true;
        else return false;
    }
};