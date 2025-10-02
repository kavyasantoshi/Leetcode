class Solution {
public:
    int maximum69Number (int num) {
        vector<int>number;
        while(num!=0)
        {
            number.push_back(num%10);
            num/=10;
        }
        reverse(number.begin(),number.end());
        int n = number.size();
        for(int i=0;i<n;i++)
        {
            if(number[i]==9)
            {
                continue;
            }
            else
            {
                number[i]=9;
                break;
            }
        }
        int res=0;
        for(int i:number)
        {
            res=res*10+i;
        }
        return res;
    }
};