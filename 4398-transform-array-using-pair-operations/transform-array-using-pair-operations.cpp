class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long first = 0;
        for(int i=0;i<source.size();i++)
        {
            first+=source[i];
        }
        long long second =0;
        for(int i=0;i<target.size();i++)
        {
            second+=target[i];
        }
        if(first == second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};