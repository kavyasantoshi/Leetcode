class Solution {
public:
    int countOdds(int low, int high) {
        int c;
        if((low%2==0 and high%2==0) || low%2!=0 and high%2==0 || low%2==0 and high%2!=0)
        {
             c=(high-low)+1;
             return c/2;
        }
        else if(low%2!=0 and high%2!=0)
        {
             c=(high-low)+1;
             return c/2+c%2;
        }
        return 0;
    }
};