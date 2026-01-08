class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int n = a.size();
        int m = b.size();
        int i = n-1;
        int j = m-1;
        int c = 0;
        while(i>=0 || j>=0 || c>0)
        {
           if(i>=0)
           {
               c+=a[i]-'0';
               i--;
           }
           if(j>=0)
           {
              c+=b[j]-'0';
              j--;
           }
           res.push_back(c%2+'0');
           c=c/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};