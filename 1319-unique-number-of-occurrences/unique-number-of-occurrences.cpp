class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(auto i:arr)
        {
            m[i]++;
        }
        set<int> s; 
        for(auto num:m) {
           s.insert(num.second); 
        }
        if(m.size()==s.size()) return 1;return 0;

    }
};