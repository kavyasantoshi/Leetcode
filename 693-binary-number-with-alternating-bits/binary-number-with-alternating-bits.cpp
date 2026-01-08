class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last = -1;
        while(n>0)
        {
            int current = n&1;
            if(last == current) return false;
            last = current;
            n=n>>1;
        }
        return true;
    }
};