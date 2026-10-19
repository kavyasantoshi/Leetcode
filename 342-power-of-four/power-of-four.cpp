class Solution {
public:
    bool isPowerOfFour(int n) {
        int ans = n;
        int count=0;
        while(n!=0)
        {
            n=n/4;
            if(n!=0)
            {
                count++;
            }
        }
        if(ans == pow(4,count)) return true;
        else return false;
    }
};