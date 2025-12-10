class Solution {
public:
    string addStrings(string num1, string num2) {
       int n = num1.size()-1;
       int m = num2.size()-1;
       string result;
       int carry=0;
       while(n>=0 || m>=0)
       {
          if(m<0)
          {
            int ans = (num1[n]-'0'+carry)%10;
            result.push_back(ans+'0');
            carry = (num1[n]-'0'+carry)/10;
            n--;
          }
          else if(n<0)
          {
            result.push_back(((num2[m]-'0'+carry)%10)+'0');
            carry = (num2[m]-'0'+carry)/10;
            m--;
          }
          else
          {
            result.push_back(((num1[n]-'0'+num2[m]-'0'+carry)%10)+'0');
            carry = (num1[n]-'0'+num2[m]-'0'+carry)/10;
            n--;
            m--;
          }
       }
       if(carry==1)
       {
         result.push_back(carry+'0');
       }
    reverse(result.begin(),result.end());
    return result;
    }
};