class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n==1) return s;
        int maxi=-1;
        string str="";
        for(int i=1;i<n;i++)
        {
            int low = i-1;
            int high = i+1;
            while(low!=-1 && high<n)
            {
                if(s[low]==s[high])
                {
                    low--;
                    high++;
                }
                else
                {
                    break;
                }
            }
            if((high-low-1)>maxi)
            {
                maxi = high-low-1;
                str=s.substr(low+1,high-low-1);
            }
        }
        for(int i=0;i<n-1;i++)
        {
            int low = i;
            int high = i+1;
            while(low!=-1 && high<n)
            {
                if(s[low]==s[high])
                {
                    low--;
                    high++;
                }
                else
                {
                    break;
                }
            }
            if((high-low-1)>maxi)
            {
                maxi = high-low-1;
                str=s.substr(low+1,high-low-1);
            }
        }
        return str;
    }
};