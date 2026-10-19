class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = n;
        int count=0;
        while(n!=0)
        {
            n=n/2;
            if(n!=0)
            {
                count++;
            }
        }
        if(ans == pow(2,count)) return true;
        else return false;
    }
};