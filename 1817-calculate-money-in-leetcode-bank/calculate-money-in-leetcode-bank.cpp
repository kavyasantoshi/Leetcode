class Solution {
public:
    int totalMoney(int n) {
        int count=0;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            if(i%7!=0)
            {
                sum+=(i%7)+(i/7);
            }
            else
            {
                sum+=7+count;
                count++;
            }
        }
        return sum;
    }
};