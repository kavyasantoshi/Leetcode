class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        vector<long long>suffix(n,0);
        suffix[n-1] = shifts[n-1];
        for(int i=n-2;i>=0;i--)
        {
           suffix[i] = suffix[i+1]+shifts[i];
        }    
        string res="";
        for(int i=0;i<s.size();i++)
        {
           char ch = (s[i]-'a'+suffix[i])%26+'a';
           res+=ch;
        }
        return res;
    }
};