class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int>arr(n+1,0);
        for(int i=0;i<shifts.size();i++)
        {
            int l = shifts[i][0];
            int r = shifts[i][1];
            int direc = shifts[i][2];
            int value = direc==0?-1:1;
            arr[l] +=value;
            arr[r+1]-=value;
        }
        for(int i=1;i<arr.size();i++)
        {
           arr[i] = arr[i-1]+arr[i];
        }
        // cout<<arr[4]<<" ";
        // cout<<arr.size();
        for(int i=0;i<n;i++)
        {
            int shift = arr[i] % 26;
            char ch = (26+s[i]-'a'+shift)%26+'a';
            // cout<<ch<<" ";
            s[i] = ch;
        }
        return s;
    }
};