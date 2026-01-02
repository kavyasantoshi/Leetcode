class Solution {
public:
    bool isVowels(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int c=0;
        for(int i=0;i<k;i++)
        {
            if(isVowels(s[i]))
            {
               c++;
            }
        }
        int Max_c = c;
        for(int i=k;i<n;i++)
        {
            if(isVowels(s[i]))
            {
                c++;
            }
            if(isVowels(s[i-k]))
            {
                c--;
            }
            Max_c = max(Max_c,c);
        }
        return Max_c;
    }
};