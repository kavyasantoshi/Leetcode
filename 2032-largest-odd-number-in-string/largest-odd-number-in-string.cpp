class Solution {
public:
    string largestOddNumber(string num) {
        string res = "";
        int n = num.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            if((num[i]%2!=0 && num[j]%2!=0) || num[i]%2==0 && num[j]%2!=0)
            {
                res+= num.substr(i,j+1);
                break;
            }
            else if(num[i]%2!=0 && num[j]%2==0 || num[i]%2==0 && num[j]%2==0)
            {
                j--;
            }
        }
        return res;
    }
};