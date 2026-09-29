class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows<=1 || numRows>=n) return s;
        vector<string>row(numRows,"");
        int current =0;
        int direction = 1;
        for(int i=0;i<n;i++)
        {
            row[current] += s[i];
            if(current == 0)
            {
                direction =1;
            }
            else if(current==numRows-1)
            {
                direction = -1;
            }
            current+=direction;
        }
        string final="";
        for(int i=0;i<row.size();i++)
        {
            final+=row[i];
        }
        return final;
    }
};