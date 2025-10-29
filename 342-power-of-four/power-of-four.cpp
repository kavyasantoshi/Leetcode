class Solution {
public:
    bool isPowerOfFour(int n) {
        int flag=0;
        for(int i=0;i<=sqrt(n);i++)
        {
            if(pow(4,i)==n)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            return true;
        }
        else
        {
         return false;
        }
    }
};