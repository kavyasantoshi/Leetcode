class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        for(int i = n-1;i>=0;i--)
        {
          if(digits[i]%10>=0 && digits[i]%10<=8)
          {
            if(carry)
            {
               digits[i]+=carry;
               carry=0;
               break;
            }
            else
            {
               digits[i]+=1;
               break;
            }
          }
        else
          {
              if(carry)
              {
                 int num = digits[i]+carry;
                 digits[i] = num%10;
                 carry = num/10;
              }
              else
              {
                 int num = digits[i]+1;
                 digits[i] = num%10;
                 carry = num/10;
              }
          }
        }
        if(carry)
        {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};