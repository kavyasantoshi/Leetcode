class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int left=0;
        int right=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                left++;
                right++;
                
            }
            else if(s[i]=='*')
            {
                left--;
                right++;
            }
            else
            {
               left--;
               right--;
            }
             if(left<0) left=0;
             if(right<0) return false;
        }
        return left==0;
    }
};