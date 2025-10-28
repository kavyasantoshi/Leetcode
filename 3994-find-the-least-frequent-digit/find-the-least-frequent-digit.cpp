class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>number;
        unordered_map<int,int>m;
        while(n!=0)
        {
            number.push_back(n%10);
            n/=10;
        }
        int l = number.size();
        for(int i=0;i<l;i++)
        {
            m[number[i]]++;
        }
        int mini = INT_MAX;
        for(auto i:m)
        {
            mini = min(mini,i.second);
        }
        int k = 9;
        for(auto i:m)
        {
            if(i.second==mini)
            {
                k=min(k,i.first);
            }
        }
        return k;
    }
};