    class Solution {
    public:
        int myAtoi(string s) {
            long answer=0;
            int n = s.size();
            int sign=1;
            int i=0;
            while(i<n && s[i]==' ')
            {
                i++;
            }
            if(i<n && (s[i]=='-' || s[i]=='+'))
            {
                sign = s[i]=='-'?-1:1;
                i++;
            }
            while(i<n && s[i]>='0' && s[i]<='9')
            {
                int digit=s[i]-'0';
                if (answer > (INT_MAX - digit) / 10) {
                    return (sign == 1) ? INT_MAX : INT_MIN;
                }
                answer=answer*10+digit;
                i++;
            }
        return answer*sign;
    }
    };