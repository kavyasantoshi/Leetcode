class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        int n = strs.size();
        for(int i=0;i<n;i++)
        {
            string ans = strs[i];
            sort(ans.begin(),ans.end());
            mpp[ans].push_back(strs[i]);
        }
        vector<vector<string>>res;
        for(auto i:mpp)
        {
            res.push_back(i.second);
        }
        return res;
    }
};