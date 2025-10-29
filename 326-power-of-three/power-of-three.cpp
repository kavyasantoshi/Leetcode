class Solution {
public:
    bool isPowerOfThree(int n) {
        int flag=0;
        for(int i=0;i<=round(sqrt(n));i++)
        {
            if(pow(3,i)==n)
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