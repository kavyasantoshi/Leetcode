class Solution {
public:
    int getLucky(string s, int k) {
        int n = s.size();
        string result;
        for(int i=0;i<n;i++)
        {
            int num = s[i]-'a'+1;
            result+=to_string(num);
        }
       while(k>0)
       {
        int sum=0;
        int r = result.size();
       for(int i=0;i<r;i++)
       {
           sum+=result[i]-'0';
       }
       result = to_string(sum);
       k--;
       }
       return stoi(result);


    }
};