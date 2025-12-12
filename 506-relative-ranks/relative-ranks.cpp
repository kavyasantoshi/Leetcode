class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>prior(score);
        sort(score.begin(),score.end(),greater<int>());
        int n = score.size();
        unordered_map<int,int>map;
        int rank=1;
        for(int i=0;i<n;i++)
        {
            map[score[i]]=rank++;
        }
        vector<string>res(n);
        for(int i=0;i<n;i++)
        {
            if(map[prior[i]]==1)
            {
               res[i]="Gold Medal";
            }
            else if(map[prior[i]]==2)
            {
               res[i]="Silver Medal";
            }
            else if(map[prior[i]]==3)
            {
               res[i]="Bronze Medal";
            }
            else
            {
                res[i]=to_string(map[prior[i]]);
            }
        }
    return res;
    }
};